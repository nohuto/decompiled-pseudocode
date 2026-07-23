/*
 * XREFs of IoNotifyQuotaState @ 0x140201210
 * Callers:
 *     <none>
 * Callees:
 *     PsIoRateControlOverQuotaNotify @ 0x1402012D8 (PsIoRateControlOverQuotaNotify.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x140207764 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoDiskIoAttributionDereference @ 0x140207954 (IoDiskIoAttributionDereference.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ObReferenceObjectSafeWithTag @ 0x1403537F0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 */

__int64 __fastcall IoNotifyQuotaState(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v8; // edi
  PVOID v9; // rbx
  struct _EX_RUNDOWN_REF *v10; // rbx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  struct _EX_RUNDOWN_REF *v13; // [rsp+38h] [rbp-10h] BYREF

  v13 = 0LL;
  Object = 0LL;
  v8 = IopAcquireReferencesFromIoAttributionHandle(a1, &v13, &Object);
  if ( v8 >= 0 )
  {
    v9 = Object;
    if ( (unsigned __int8)ObReferenceObjectSafeWithTag(Object, 1953261124LL) )
    {
      PsIoRateControlOverQuotaNotify((_DWORD)v9, a2, a3, a4, a5);
      v8 = 0;
      ObfDereferenceObjectWithTag(v9, 0x746C6644u);
    }
    else
    {
      v8 = -1073741431;
    }
  }
  v10 = v13;
  if ( v13 )
  {
    ExReleaseRundownProtection(v13 + 21);
    IoDiskIoAttributionDereference(v10);
  }
  return (unsigned int)v8;
}
