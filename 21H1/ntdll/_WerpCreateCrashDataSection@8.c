/*
 * XREFs of _WerpCreateCrashDataSection@8 @ 0x4B33AFD2
 * Callers:
 *     _RtlReportExceptionEx@20 @ 0x4B33A550 (_RtlReportExceptionEx@20.c)
 *     _RtlReportExceptionHelper@16 @ 0x4B33A890 (_RtlReportExceptionHelper@16.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall WerpCreateCrashDataSection(_DWORD *a1, void **a2)
{
  int Section; // esi
  void *v5; // ecx
  void *v6; // eax
  _DWORD v8[6]; // [esp+10h] [ebp-30h] BYREF
  _DWORD v9[3]; // [esp+28h] [ebp-18h] BYREF
  int v10; // [esp+34h] [ebp-Ch] BYREF
  void *v11; // [esp+38h] [ebp-8h] BYREF
  void *v12; // [esp+3Ch] [ebp-4h] BYREF

  v11 = 0;
  v12 = 0;
  v10 = 0;
  if ( a1 )
    *a1 = 0;
  if ( a2 )
    *a2 = 0;
  if ( !a1 )
    return -1073741585;
  if ( !a2 )
    return -1073741584;
  v8[1] = 0;
  v8[2] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v9[1] = 0;
  v8[0] = 24;
  v8[3] = 2;
  v9[0] = 1052;
  Section = NtCreateSection((int)&v11, 983047, (int)v8, (int)v9, 4, 0x8000000, 0);
  if ( Section < 0 || (Section = ZwMapViewOfSection((int)v11, -1, (int)&v12, 0, 0, 0, (int)&v10, 1, 0, 4), Section < 0) )
  {
    v5 = v11;
    v6 = v12;
  }
  else
  {
    memset(v12, 0, 0xF8u);
    v5 = 0;
    *a1 = v11;
    Section = 0;
    *a2 = v12;
    v6 = 0;
    v11 = 0;
    v12 = 0;
  }
  if ( v6 )
  {
    NtUnmapViewOfSection(-1, (int)v6);
    v12 = 0;
    v5 = v11;
  }
  if ( v5 )
    NtClose(v5);
  return Section;
}
