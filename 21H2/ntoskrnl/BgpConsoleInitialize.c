/*
 * XREFs of BgpConsoleInitialize @ 0x1409F4820
 * Callers:
 *     <none>
 * Callees:
 *     BgpGetResolution @ 0x1402D3BC0 (BgpGetResolution.c)
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14039C2A8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039C2F8 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x14039C584 (BgpFwAllocateMemory.c)
 *     BgpConsoleSetPointSize @ 0x1403BCAE4 (BgpConsoleSetPointSize.c)
 *     memset @ 0x140414200 (memset.c)
 *     BgpFoGetFontHandle @ 0x1409F334C (BgpFoGetFontHandle.c)
 *     BgpDisplayCharacterGetContext @ 0x1409F4A4C (BgpDisplayCharacterGetContext.c)
 *     BgpConsoleClearScreenEx @ 0x1409F6718 (BgpConsoleClearScreenEx.c)
 *     BgpConsoleGetFontName @ 0x140A96EB8 (BgpConsoleGetFontName.c)
 */

__int64 __fastcall BgpConsoleInitialize(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _DWORD *Memory; // rax
  _DWORD *Resolution; // rax
  __int64 v8; // r9
  int FontHandle; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  unsigned int *v13; // rbx
  int v14; // edi
  _DWORD *v15; // rdi
  __int64 Context; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rcx
  unsigned int i; // r9d
  __int64 v25; // [rsp+30h] [rbp-40h] BYREF
  wchar_t *Str2; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v27[4]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v28[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 *v29; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v30; // [rsp+60h] [rbp-10h]
  int v31; // [rsp+64h] [rbp-Ch]

  v29 = 0LL;
  v30 = 0;
  v25 = 0LL;
  Str2 = 0LL;
  BgpFwAcquireLock();
  Memory = (_DWORD *)BgpFwAllocateMemory(0x5E10uLL);
  qword_140CDB158 = (__int64)Memory;
  if ( !Memory )
  {
    v14 = -1073741801;
    goto LABEL_12;
  }
  *Memory = 80;
  Memory[1] = 25;
  Memory[2] |= (unsigned __int16)a1;
  Memory[3] = a2;
  Memory[4] = a3;
  Resolution = BgpGetResolution(v27);
  *(_QWORD *)(v8 + 20) = *(_QWORD *)Resolution;
  LODWORD(Resolution) = Resolution[2];
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_DWORD *)(v8 + 56) = 0;
  *(_DWORD *)(v8 + 28) = (_DWORD)Resolution;
  *(_DWORD *)(v8 + 32) = 15;
  *(_DWORD *)(v8 + 48) = 12;
  *(_DWORD *)(v8 + 52) = 22;
  memset((void *)(v8 + 80), 0, 0x5DC0uLL);
  v28[0] = a3;
  v28[1] = a2;
  v31 = ((unsigned __int8)~(_BYTE)a1 >> 1) & 1;
  BgpConsoleGetFontName((unsigned int)dword_140C13658, &Str2);
  FontHandle = BgpFoGetFontHandle(Str2, &v29);
  v13 = (unsigned int *)qword_140CDB158;
  v14 = FontHandle;
  if ( FontHandle >= 0 )
  {
    v14 = BgpConsoleSetPointSize(
            *(_DWORD *)(qword_140CDB158 + 4),
            *(_DWORD *)qword_140CDB158,
            *(_DWORD *)(qword_140CDB158 + 24),
            *(_DWORD *)(qword_140CDB158 + 20),
            (__int64)v28,
            (__int64)&v25);
    if ( v14 >= 0 )
    {
      v15 = v13 + 12;
      v13[8] = v30;
      *((_QWORD *)v13 + 6) = v25;
      Context = BgpDisplayCharacterGetContext(v28, v13 + 12, ~(unsigned __int8)(a1 >> 1) & 2 | 1u);
      v13 = (unsigned int *)qword_140CDB158;
      *(_QWORD *)(qword_140CDB158 + 40) = Context;
      if ( Context )
      {
        v17 = 0LL;
        v18 = *v13;
        v19 = v13[1];
        v13[15] = (v13[5] - (_DWORD)v18 * *v15) >> 1;
        v20 = v15[1] * v19;
        v21 = v13[6];
        v13[19] = 0;
        v13[17] = 0;
        v13[18] = 0;
        v22 = (v21 - v20) >> 1;
        v13[16] = v22;
        if ( (_DWORD)v18 )
        {
          do
          {
            for ( i = 0; i < v13[1]; v13[v18 + 20] = a2 )
            {
              v22 = 25LL * (unsigned int)v17 + i++;
              v18 = 3 * v22;
              LOWORD(v13[v18 + 22]) = 32;
              v13[3 * v22 + 21] = a3;
            }
            v17 = (unsigned int)(v17 + 1);
          }
          while ( (unsigned int)v17 < *v13 );
        }
        if ( (a1 & 1) != 0 )
          BgpConsoleClearScreenEx(v22, v18, v17);
        v14 = 0;
        goto LABEL_12;
      }
      v14 = -1073741823;
    }
  }
  if ( v13 )
  {
    BgpFwFreeMemory((__int64)v13, v10, v11, v12);
    qword_140CDB158 = 0LL;
  }
LABEL_12:
  BgpFwReleaseLock();
  return (unsigned int)v14;
}
