/*
 * XREFs of CmPostCallbackNotification @ 0x140622CE0
 * Callers:
 *     CmpDoQueryKeyName @ 0x14025BE50 (CmpDoQueryKeyName.c)
 *     CmpDeleteKeyObject @ 0x140622AD0 (CmpDeleteKeyObject.c)
 *     CmUnloadKey @ 0x140659A98 (CmUnloadKey.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x1402090D0 (ExIsResourceAcquiredSharedLite.c)
 *     CmpCallCallBacksEx @ 0x140626B30 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmPostCallbackNotification(int a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  _QWORD v10[3]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v11; // [rsp+58h] [rbp-30h]
  __int128 v12; // [rsp+60h] [rbp-28h]
  __int64 v13; // [rsp+70h] [rbp-18h]

  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)*a5 != a5 )
  {
    v13 = 0LL;
    v10[0] = a2;
    v10[1] = a3;
    v11 = a3;
    v12 = 0LL;
    v10[2] = a4;
    CmpCallCallBacksEx(a1, (unsigned int)v10, 0, 0, a1, a2, (__int64)a5);
    return (unsigned int)v11;
  }
  return a3;
}
