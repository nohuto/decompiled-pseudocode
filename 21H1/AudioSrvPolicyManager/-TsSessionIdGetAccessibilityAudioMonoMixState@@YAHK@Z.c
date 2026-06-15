/*
 * XREFs of ?TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z @ 0x18002FDF8
 * Callers:
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x18000C0F0 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x18000C380 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x18000C410 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002E10C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionIdGetAccessibilityAudioMonoMixState(DWORD a1)
{
  unsigned int v2; // esi
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  struct TSSession *v5; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+40h] [rbp+18h]

  v2 = 0;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v6 = v3;
  if ( !(unsigned int)TsSessionFromSessionId(a1, 1, 0LL, &v5) && *((_DWORD *)v5 + 76) )
    v2 = *((_DWORD *)v5 + 77);
  if ( v3 )
    LeaveCriticalSection(v3);
  return v2;
}
