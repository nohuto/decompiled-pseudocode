/*
 * XREFs of CmPostCallbackNotification @ 0x14065C5F0
 * Callers:
 *     CmpDoQueryKeyName @ 0x14026CB70 (CmpDoQueryKeyName.c)
 *     CmUnloadKey @ 0x1405DF54C (CmUnloadKey.c)
 *     CmpDeleteKeyObject @ 0x14065C3E0 (CmpDeleteKeyObject.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14035ABD0 (ExIsResourceAcquiredSharedLite.c)
 *     CmpCallCallBacksEx @ 0x14070A820 (CmpCallCallBacksEx.c)
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
