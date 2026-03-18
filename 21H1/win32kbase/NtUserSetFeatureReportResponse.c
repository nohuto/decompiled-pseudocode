/*
 * XREFs of NtUserSetFeatureReportResponse @ 0x1C013E270
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C016F7C8 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C01720B0 (RIMIDEResetPointerDeviceMaxCount.c)
 */

__int64 __fastcall NtUserSetFeatureReportResponse(char *a1, char *a2, unsigned int a3)
{
  __int64 v3; // r13
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  size_t v11; // r14
  void *v12; // rax
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  PVOID v18; // r14
  char *v19; // r15
  _DWORD *v20; // r15
  unsigned int v21; // r12d
  _DWORD *v22; // rsi
  int v23; // eax
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  Object = 0LL;
  v6 = 1;
  EnterCrit(0LL, 1);
  if ( (unsigned int)(v3 - 1) > 6 || (v8 = 12 * v3, (unsigned __int64)(12 * v3) > 0xFFFFFFFF) )
  {
    v10 = 87LL;
    goto LABEL_43;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v10 = 5LL;
LABEL_43:
    v6 = 0;
    UserSetLastError(v10, v7);
    goto LABEL_44;
  }
  if ( v8 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v9) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a2[v8] > MmUserProbeAddress || &a2[v8] < a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v11 = (unsigned int)v8;
  v12 = (void *)Win32AllocPoolWithQuota((unsigned int)v8, 0x74697355u);
  v13 = (__int64)v12;
  if ( !v12 )
    ExRaiseStatus(-1073741801);
  memmove(v12, a2, v11);
  v14 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v18 = Object;
  if ( Object )
    v19 = (char *)Object + 88;
  else
    v19 = 0LL;
  if ( v14 < 0 )
    goto LABEL_32;
  if ( -__CFSHR__(*((_DWORD *)v19 + 50), 8) != 1 )
    goto LABEL_32;
  v20 = (_DWORD *)*((_QWORD *)v19 + 60);
  if ( *(_DWORD *)(*((_QWORD *)Object + 59) + 16LL) || (v20[78] & 0x2000) == 0 )
    goto LABEL_32;
  v21 = 0;
  if ( (_DWORD)v3 )
  {
    v22 = (_DWORD *)(v13 + 4);
    while ( *((_WORD *)v22 - 2) == 13 )
    {
      if ( *((_WORD *)v22 - 1) == 85 )
      {
        v15 = (unsigned int)*v22;
        if ( (int)v15 > 256 || (v17 = (unsigned int)v20[6], (unsigned int)(v17 - 1) > 3) )
        {
          if ( v20[6] != 7 )
            break;
          v17 = 7LL;
          if ( (int)v15 > 5 )
            break;
        }
        v16 = (unsigned int)v20[180];
        v23 = v16 - 1;
        if ( (_DWORD)v17 != 7 )
          v23 = v20[180];
        if ( (_DWORD)v15 != v23 && !(unsigned int)RIMIDEResetPointerDeviceMaxCount(v20) )
          break;
      }
      else
      {
        if ( *((_WORD *)v22 - 1) != 89 || v20[6] != 7 || *v22 > 1u )
          break;
        v20[226] = *v22;
      }
      ++v21;
      v22 += 3;
      if ( v21 >= (unsigned int)v3 )
        goto LABEL_38;
    }
LABEL_32:
    v6 = 0;
    UserSetLastError(87LL, v15);
  }
LABEL_38:
  if ( v18 )
    ObfDereferenceObject(v18);
  if ( v13 )
    Win32FreePool(v13, v15, v17);
LABEL_44:
  UserSessionSwitchLeaveCrit(v16);
  return v6;
}
