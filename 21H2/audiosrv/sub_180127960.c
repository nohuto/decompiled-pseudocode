/*
 * XREFs of sub_180127960 @ 0x180127960
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 *     sub_1801272EC @ 0x1801272EC (sub_1801272EC.c)
 */

__int64 __fastcall sub_180127960(__int64 a1, _DWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h] BYREF
  __int64 v16[2]; // [rsp+50h] [rbp-20h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    *a2 = 0;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 416) + 48LL))(*(_QWORD *)(a1 + 416), v16);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v12 = -v16[0];
      if ( !v16[0] )
        v12 = -v16[1];
      if ( v12 )
        *a2 = sub_1801272EC(v16, v9, v10, v11);
      else
        return (*(unsigned int (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a1 + 192LL))(a1, a2);
    }
    else if ( (unsigned int)dword_18019C480 > 2 )
    {
      HIDWORD(v14) = v8;
      LODWORD(v14) = 785;
      v15 = (__int64)"SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioRenderingMode";
      sub_180109778(
        (__int64)&dword_18019C480,
        byte_18016C0FA,
        v10,
        v11,
        (const CHAR **)&v15,
        (__int64)&v14,
        (__int64)&v14 + 4);
    }
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      v14 = 0x30B80070057LL;
      v15 = (__int64)"SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioRenderingMode";
      sub_180109778(
        (__int64)&dword_18019C480,
        byte_18016C12C,
        v5,
        v6,
        (const CHAR **)&v15,
        (__int64)&v14 + 4,
        (__int64)&v14);
    }
    return (unsigned int)-2147024809;
  }
  return v7;
}
