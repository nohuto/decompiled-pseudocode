/*
 * XREFs of sub_180029670 @ 0x180029670
 * Callers:
 *     TS_SessionChanged @ 0x18002A7F0 (TS_SessionChanged.c)
 * Callees:
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180029670(DWORD SessionId)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v3; // eax
  unsigned int v4; // esi
  __int64 v5; // rbx
  void *v6; // rcx
  void *v7; // rcx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+50h] [rbp+18h]
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v10 = v2;
  v3 = sub_18002880C(SessionId, 0, &v11, &v9);
  v4 = v3;
  if ( v3 == 1168 )
  {
    v4 = 0;
    goto LABEL_3;
  }
  if ( v3 )
  {
LABEL_3:
    if ( v2 )
      LeaveCriticalSection(v2);
    return v4;
  }
  v5 = v9;
  *(_DWORD *)(v9 + 304) = 0;
  *(_BYTE *)(v5 + 324) = 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  v6 = *(void **)(v5 + 240);
  if ( v6 )
  {
    PowerSettingUnregisterNotification(v6);
    *(_QWORD *)(v5 + 240) = 0LL;
  }
  v7 = *(void **)(v5 + 248);
  if ( v7 )
  {
    PowerSettingUnregisterNotification(v7);
    *(_QWORD *)(v5 + 248) = 0LL;
  }
  *(_DWORD *)(v5 + 228) = 1;
  return v4;
}
