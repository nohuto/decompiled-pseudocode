/*
 * XREFs of ?SetShareMode@CPolicyConfig@@UEAAJPEBGW4_DeviceShareMode@@@Z @ 0x1800D88E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800D8670 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 */

__int64 __fastcall CPolicyConfig::SetShareMode(__int64 a1, __int64 a2, LONG a3)
{
  int v4; // ebx
  struct tagPROPVARIANT v6; // [rsp+20h] [rbp-28h] BYREF
  struct IMMDevice *v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         &v7);
  if ( v4 < 0
    || (memset(&v6, 0, sizeof(v6)),
        v6.lVal = a3,
        v6.vt = 19,
        v4 = CPolicyConfig::SetPropertyStoreProperty(v7, 0, &PKEY_AudioEngine_ShareMode, &v6),
        v4 < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetShareMode", 2201, v4);
  }
  if ( v7 )
    ((void (__fastcall *)(struct IMMDevice *))v7->lpVtbl->Release)(v7);
  return (unsigned int)v4;
}
