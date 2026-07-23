/*
 * XREFs of HvlpGetEncryptedDataFromHypervisor @ 0x1404F9018
 * Callers:
 *     HvlGetEncryptedData @ 0x1404F8DD0 (HvlGetEncryptedData.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     HvlpGetPageList @ 0x1404FB5E8 (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x1404FB7CC (HvlpStartPageListIteration.c)
 */

__int64 __fastcall HvlpGetEncryptedDataFromHypervisor(
        __int64 a1,
        char *a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned __int64 a5)
{
  _DWORD *v5; // r13
  unsigned int v10; // ebx
  __int64 v11; // rsi
  unsigned int v12; // ebp
  unsigned int v13; // edi
  __int64 v14; // rbp
  __int64 v15; // r14
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]
  unsigned int v20; // [rsp+60h] [rbp+8h] BYREF
  int v21; // [rsp+64h] [rbp+Ch]

  v21 = HIDWORD(a1);
  v5 = (_DWORD *)a5;
  v18 = 0LL;
  v20 = 0;
  *(_DWORD *)a5 = 0;
  if ( (HvlpRootFlags & 4) == 0 )
    return 3221226021LL;
  if ( !(_BYTE)HvlpCrashdumpIterationState )
  {
    HvlpStartPageListIteration(1LL);
    *((_QWORD *)&HvlpCrashdumpIterationState + 1) = -1LL;
    LODWORD(xmmword_140C475F0) = 0;
    LOBYTE(HvlpCrashdumpIterationState) = 1;
  }
  v10 = xmmword_140C475F0;
  if ( (_DWORD)xmmword_140C475F0 )
  {
    v11 = *((_QWORD *)&HvlpCrashdumpIterationState + 1);
    v18 = *((_QWORD *)&HvlpCrashdumpIterationState + 1);
    v20 = xmmword_140C475F0;
  }
  else
  {
    if ( !(unsigned int)HvlpGetPageList(1LL, &v18, &v20) )
    {
      qword_140C474C8 = 0LL;
      HvlpIteratorCrashdump = 0;
      LOBYTE(HvlpCrashdumpIterationState) = 0;
      *((_QWORD *)&HvlpCrashdumpIterationState + 1) = -1LL;
      LODWORD(xmmword_140C475F0) = 0;
      return 3221226021LL;
    }
    v11 = v18;
    v10 = v20;
  }
  v12 = a3 >> 12;
  v13 = v10;
  if ( v12 < v10 )
    v13 = v12;
  if ( v13 )
  {
    v14 = v11 << 12;
    v15 = v11;
    a5 = v13;
    do
    {
      v19 = v14 & 0xFFFFFFFFF000LL | 0x8000000000000001uLL;
      *(_QWORD *)(8 * (((unsigned __int64)qword_140C475C8 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL) = v19;
      v16 = __readcr4();
      if ( (v16 & 0x20080) != 0 )
      {
        __writecr4(v16 ^ 0x80);
        __writecr4(v16);
      }
      else
      {
        v17 = __readcr3();
        __writecr3(v17);
      }
      memmove(a2, qword_140C475C8, 0x1000uLL);
      *a4 = v15;
      a2 += 4096;
      v14 += 4096LL;
      ++a4;
      ++v15;
      --a5;
    }
    while ( a5 );
  }
  *v5 = v13 << 12;
  LODWORD(xmmword_140C475F0) = v10 - v13;
  *((_QWORD *)&HvlpCrashdumpIterationState + 1) = v11 + v13;
  return 0LL;
}
