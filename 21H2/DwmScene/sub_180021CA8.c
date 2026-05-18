/*
 * XREFs of sub_180021CA8 @ 0x180021CA8
 * Callers:
 *     sub_18001C56C @ 0x18001C56C (sub_18001C56C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180021CA8(unsigned int a1, __int64 a2, __int64 (__fastcall *a3)(_QWORD, _QWORD, _QWORD, _QWORD))
{
  unsigned __int32 v6; // edx
  unsigned int v7; // ecx
  unsigned int *v8; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  __int64 result; // rax
  _DWORD v15[16]; // [rsp+30h] [rbp-40h] BYREF

  _m_prefetchw((const void *)a2);
  v6 = _InterlockedAnd((volatile signed __int32 *)a2, 0xFFC0401E);
  v7 = (v6 >> 1) & 0xF;
  if ( v7 )
  {
    _m_prefetchw((const void *)(a2 + 4));
    v7 &= ~_InterlockedOr((volatile signed __int32 *)(a2 + 4), v7);
  }
  v15[0] = 2;
  v15[2] = 6;
  v15[4] = 3;
  v15[1] = v7 & 1;
  v8 = v15;
  v15[6] = 7;
  v15[3] = (v7 >> 1) & 1;
  v15[8] = 0;
  v9 = 0;
  v15[5] = (v7 >> 2) & 1;
  v10 = (v6 >> 5) & 0x1FF;
  v15[7] = v7 >> 3;
  v15[10] = 4;
  v15[12] = 1;
  if ( (v6 & 0x4000) != 0 )
    v10 = 0;
  v15[14] = 5;
  v15[9] = v10;
  v11 = (v6 >> 15) & 0x7F;
  v15[11] = (v6 & 0x4000) != 0 ? (v6 >> 5) & 0x1FF : 0;
  v12 = v6 & 0x400000;
  v13 = v11;
  if ( v12 )
    v13 = 0;
  v15[13] = v13;
  v15[15] = v12 != 0 ? v11 : 0;
  do
  {
    result = HIDWORD(*(_QWORD *)v8);
    if ( (_DWORD)result )
      result = a3(a1, *v8, (unsigned int)result, 0LL);
    ++v9;
    v8 += 2;
  }
  while ( v9 < 8 );
  return result;
}
