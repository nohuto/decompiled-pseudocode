/*
 * XREFs of sub_1800F29D8 @ 0x1800F29D8
 * Callers:
 *     sub_180037FC0 @ 0x180037FC0 (sub_180037FC0.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800F3D60 @ 0x1800F3D60 (sub_1800F3D60.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F29D8(__int64 a1, void *a2)
{
  __int64 v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 *v6; // rcx
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // [rsp+20h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v11; // [rsp+30h] [rbp-28h]
  void *v13; // [rsp+70h] [rbp+18h] BYREF

  v3 = a1;
  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 232));
  try
  {
    v13 = a2;
    v4 = 0;
    v5 = sub_1800F3D60(v3 + 272, &v13, *(_QWORD *)(v3 + 280));
    v6 = *(__int64 **)(v3 + 280);
    if ( v6 )
      *v6 = v5;
    else
      *(_QWORD *)(v3 + 272) = v5;
    *(_QWORD *)(v3 + 280) = v5;
  }
  catch ( ATL::CAtlException *v9 )
  {
    v8 = v9;
    if ( *(_DWORD *)v9 == -1073741571 )
      o__resetstkoflw();
    v3 = a1;
    v4 = *(_DWORD *)v8;
  }
  SetEvent(*(HANDLE *)(v3 + 224));
  if ( v13 )
    sub_18006A148(v13);
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
