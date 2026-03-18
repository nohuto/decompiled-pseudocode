/*
 * XREFs of ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C001DE50
 * Callers:
 *     NtGdiOpenDCW @ 0x1C0079880 (NtGdiOpenDCW.c)
 * Callees:
 *     AllocThreadBufferWithTag @ 0x1C001E160 (AllocThreadBufferWithTag.c)
 *     PopThreadGuardedObject @ 0x1C0084420 (PopThreadGuardedObject.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 */

struct _DRIVER_INFO_2W *__fastcall CaptureDriverInfo2W(struct _DRIVER_INFO_2W *a1)
{
  unsigned __int64 v2; // r14
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r15
  unsigned __int64 *v6; // r10
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8
  size_t v10; // r9
  unsigned __int64 v11; // r8
  size_t v12; // r13
  unsigned __int64 v13; // rdi
  _QWORD *v14; // rax
  void *v15; // rcx
  void *v16; // rcx
  __int64 Size; // [rsp+28h] [rbp-50h]
  size_t v19; // [rsp+80h] [rbp+8h]

  v2 = *((_QWORD *)a1 + 1);
  v3 = 0LL;
  if ( !v2 )
    return 0LL;
  v4 = *((_QWORD *)a1 + 3);
  if ( !v4 )
    return 0LL;
  v5 = *((_QWORD *)a1 + 4);
  if ( !v5 )
    return 0LL;
  if ( (v2 & 1) != 0 )
    goto LABEL_48;
  v6 = (unsigned __int64 *)MmUserProbeAddress;
  if ( v2 + 2 > MmUserProbeAddress || v2 + 2 < v2 )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( (v4 & 1) != 0 )
    goto LABEL_48;
  if ( v4 + 2 > MmUserProbeAddress || v4 + 2 < v4 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v7 = -1LL;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(v2 + 2 * v8) );
  v9 = -1LL;
  do
    ++v9;
  while ( *(_WORD *)(v4 + 2 * v9) );
  if ( v8 + 1 < v8 )
    return 0LL;
  if ( v9 + 1 < v9 )
    return 0LL;
  if ( !is_mul_ok(v8 + 1, 2uLL) )
    return 0LL;
  if ( !is_mul_ok(v9 + 1, 2uLL) )
    return 0LL;
  v10 = 2 * v8;
  v19 = v10;
  if ( v10 + 50 < 0x30 )
    return 0LL;
  Size = 2 * v9;
  v11 = 2 * v9 + v10 + 52;
  if ( v11 < v10 + 50 )
    return 0LL;
  if ( (v5 & 1) != 0 )
LABEL_48:
    ExRaiseDatatypeMisalignment();
  if ( v5 + 2 > MmUserProbeAddress || v5 + 2 < v5 )
    *(_BYTE *)MmUserProbeAddress = 0;
  do
    ++v7;
  while ( *(_WORD *)(v5 + 2 * v7) );
  if ( v7 + 1 < v7 )
    return 0LL;
  if ( !is_mul_ok(v7 + 1, 2uLL) )
    return 0LL;
  v12 = 2 * v7;
  v13 = v11 + 2 * v7 + 2;
  if ( v13 < v11 || v13 - 48 > 0x270FFD0 )
    return 0LL;
  if ( (_DWORD)v13 )
  {
    v14 = (_QWORD *)AllocThreadBufferWithTag((unsigned int)v13, 1886221383LL, 0LL);
    v3 = v14;
    if ( v14 )
      memset(v14, 0, (unsigned int)v13);
    v10 = v19;
    v6 = (unsigned __int64 *)MmUserProbeAddress;
  }
  if ( v3 )
  {
    *(_DWORD *)v3 = *(_DWORD *)a1;
    v3[5] = 0LL;
    v3[2] = 0LL;
    v3[1] = v3 + 6;
    v3[3] = (char *)v3 + v10 + 50;
    if ( v10 + v2 < v2 || v10 + v2 > *v6 )
      *(_BYTE *)*v6 = 0;
    memmove(v3 + 6, (const void *)v2, v10);
    v15 = (void *)v3[3];
    if ( Size + v4 < v4 || Size + v4 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v15, (const void *)v4, Size);
    v16 = (void *)(Size + v3[3] + 2LL);
    v3[4] = v16;
    if ( v5 + v12 < v5 || v5 + v12 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v16, (const void *)v5, v12);
  }
  return (struct _DRIVER_INFO_2W *)v3;
}
