/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x1800093B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcInsertChangeRegistration @ 0x180009438 (RtlpFcInsertChangeRegistration.c)
 *     RtlpFcAllocateChangeRegistration @ 0x18000948C (RtlpFcAllocateChangeRegistration.c)
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x180009518 (RtlpFcEnsureSubscriptionManagerStarted.c)
 *     TpPostWork @ 0x1800128C0 (TpPostWork.c)
 */

__int64 __fastcall RtlRegisterFeatureConfigurationChangeNotification(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx

  if ( byte_18016C508 )
    return 3221226238LL;
  result = RtlpFcEnsureSubscriptionManagerStarted();
  if ( (int)result >= 0 )
  {
    v9 = RtlpFcAllocateChangeRegistration(a1, a2);
    v11 = v9;
    if ( v9 )
    {
      RtlpFcInsertChangeRegistration(v10, v9);
      if ( a3 )
      {
        if ( MEMORY[0x7FFE0710] != *a3 )
          TpPostWork(*(_QWORD *)(v11 + 40));
      }
      *a4 = v11;
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
