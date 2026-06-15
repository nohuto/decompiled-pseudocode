/*
 * XREFs of sub_180013074 @ 0x180013074
 * Callers:
 *     sub_18001F228 @ 0x18001F228 (sub_18001F228.c)
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180013074(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v3; // edi
  _QWORD *v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+28h] [rbp-20h]
  LPCRITICAL_SECTION v10; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  v10 = (LPCRITICAL_SECTION)(a1 + 32);
  v11 = 0;
  sub_18001A330(&v10);
  lpCriticalSection = v2;
  v9 = 0;
  sub_18001A330(&lpCriticalSection);
  v3 = 0;
  v4 = *(_QWORD **)(a1 + 72);
  v5 = 1;
  while ( v4 )
  {
    v6 = v4[2];
    v4 = (_QWORD *)*v4;
    if ( !*(_DWORD *)(v6 + 448) && *(_DWORD *)(v6 + 460) )
    {
      v3 = 1;
      break;
    }
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  if ( !v3 || (*(_BYTE *)(a1 + 208) & 0x10) == 0 )
    v5 = 0;
  if ( v11 )
    LeaveCriticalSection(v10);
  return v5;
}
