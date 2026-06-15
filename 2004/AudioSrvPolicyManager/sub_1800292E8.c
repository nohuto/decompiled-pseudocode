/*
 * XREFs of sub_1800292E8 @ 0x1800292E8
 * Callers:
 *     sub_18001E848 @ 0x18001E848 (sub_18001E848.c)
 *     PbmUnregisterAppManagerNotification @ 0x180023A20 (PbmUnregisterAppManagerNotification.c)
 * Callees:
 *     sub_180025BB0 @ 0x180025BB0 (sub_180025BB0.c)
 *     sub_180028784 @ 0x180028784 (sub_180028784.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     sub_18002B478 @ 0x18002B478 (sub_18002B478.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800292E8(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  volatile signed __int32 *v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+18h]

  v6 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v8 = v2;
  if ( !(unsigned int)sub_18002880C(*(_DWORD *)(a1 + 196), 0, &v7, &v6) )
  {
    v3 = (volatile signed __int32 *)a1;
    v4 = v6;
    if ( (int)sub_180028784(v6, v3) >= 0
      && *(_DWORD *)(v4 + 48)
      && *(_DWORD *)(v4 + 4) == 0xFFFF
      && !*(_DWORD *)(v4 + 32)
      && !*(_QWORD *)(v4 + 72) )
    {
      EnterCriticalSection(&CriticalSection);
      sub_18002B478(v5, v7);
      sub_180025BB0(v4);
      sub_180039D98((void *)v4);
      LeaveCriticalSection(&CriticalSection);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
