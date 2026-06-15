/*
 * XREFs of sub_18005B230 @ 0x18005B230
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005B54C @ 0x18005B54C (sub_18005B54C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_18005B230(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int v3; // eax
  unsigned int v4; // edi
  __int128 v6; // [rsp+40h] [rbp-40h] BYREF
  int v7; // [rsp+50h] [rbp-30h]
  __int128 v8; // [rsp+60h] [rbp-20h] BYREF
  char *v9; // [rsp+70h] [rbp-10h]
  char v10; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v11; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v12; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v13; // [rsp+C8h] [rbp+48h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  if ( v1 )
    LeaveCriticalSection(v1);
  v9 = 0LL;
  v8 = 0LL;
  WORD4(v8) = 0;
  LOWORD(v8) = 2;
  v6 = xmmword_180160C60;
  v7 = 2;
  v3 = sub_18005B54C(a1, &v6, &v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      return v4;
    LODWORD(v12) = 222;
LABEL_10:
    LODWORD(v11) = v3;
    v13 = (__int64)"SpatialAudioDevicePropertyWriter::ResetDeviceProperties";
    sub_180109778((int)&dword_18019C480, (__int64)&v13, (__int64)&v12, (__int64)&v11);
    return v4;
  }
  v10 = 0;
  v8 = 0LL;
  LOWORD(v8) = 65;
  DWORD2(v8) = 1;
  v9 = &v10;
  v7 = 2;
  v6 = xmmword_18015B6B0;
  v3 = sub_18005B54C(a1, &v6, &v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      return v4;
    LODWORD(v12) = 232;
    goto LABEL_10;
  }
  if ( !*(_DWORD *)(a1 + 96) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  return v4;
}
