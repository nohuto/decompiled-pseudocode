/*
 * XREFs of ?FxIFRValidateRecord@@YAJPEAU_WDF_IFR_RECORD@@_K1@Z @ 0x1C003D4E8
 * Callers:
 *     ?FxIFRSendRecordsToWpp@@YAJ_KPEAU_WDF_IFR_HEADER@@@Z @ 0x1C003D238 (-FxIFRSendRecordsToWpp@@YAJ_KPEAU_WDF_IFR_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxIFRValidateRecord(
        _WDF_IFR_RECORD *IfrRecord,
        unsigned __int64 IfrHeaderMaxValidPtr,
        unsigned __int64 IfrMaxValidPtr)
{
  __int64 Length; // rax
  unsigned __int8 *v4; // rdx

  if ( (unsigned __int64)IfrRecord <= IfrHeaderMaxValidPtr )
  {
    Length = IfrRecord->Length;
    if ( (unsigned int)Length >= 0x1C )
    {
      v4 = &IfrRecord[-1].MessageGuid.Data4[Length + 7];
      if ( v4 < (unsigned __int8 *)IfrRecord )
        return 3221225621LL;
      if ( (unsigned __int64)v4 <= IfrMaxValidPtr )
        return 0LL;
    }
  }
  return 3221225990LL;
}
