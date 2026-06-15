/*
 * XREFs of sub_180127180 @ 0x180127180
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005B54C @ 0x18005B54C (sub_18005B54C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_180127180(__int64 a1, _DWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v12; // [rsp+40h] [rbp-40h] BYREF
  int v13; // [rsp+50h] [rbp-30h]
  __int128 v14; // [rsp+60h] [rbp-20h] BYREF
  _DWORD *v15; // [rsp+70h] [rbp-10h]
  __int64 v16; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+30h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    *a2 = 1509949441;
    v14 = 0LL;
    LOWORD(v14) = 65;
    v12 = xmmword_18015B6B0;
    DWORD2(v14) = 146;
    v15 = a2;
    v13 = 2;
    v8 = sub_18005B54C(a1, (__int64)&v12, (__int64)&v14);
    v7 = v8;
    if ( v8 >= 0 )
    {
      if ( !*(_DWORD *)(a1 + 96) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    }
    else if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v16) = v8;
      LODWORD(v17) = 339;
      v18 = (__int64)"SpatialAudioDevicePropertyWriter::SetDeviceProperties";
      sub_180109778(
        (__int64)&dword_18019C480,
        byte_18016C0FA,
        v9,
        v10,
        (const CHAR **)&v18,
        (__int64)&v17,
        (__int64)&v16);
    }
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v16) = -2147024809;
      v18 = (__int64)"SpatialAudioDevicePropertyWriter::SetDeviceProperties";
      LODWORD(v17) = 328;
      sub_180109778(
        (__int64)&dword_18019C480,
        byte_18016C12C,
        v5,
        v6,
        (const CHAR **)&v18,
        (__int64)&v17,
        (__int64)&v16);
    }
    return (unsigned int)-2147024809;
  }
  return v7;
}
