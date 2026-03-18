/*
 * XREFs of HvlpHvIdentityInfoCallback @ 0x140543910
 * Callers:
 *     <none>
 * Callees:
 *     HviGetHypervisorInterface @ 0x1403C0360 (HviGetHypervisorInterface.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140647B74 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HviGetHypervisorVersion @ 0x140647BBC (HviGetHypervisorVersion.c)
 */

void __fastcall HvlpHvIdentityInfoCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        __int64 ReasonSpecificDataLength)
{
  __int64 v4; // rax
  _DWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax

  v4 = ReasonSpecificData[4];
  *((_OWORD *)ReasonSpecificData + 1) = HvlpSecondaryDumpDataGuid;
  if ( v4 )
  {
    if ( *((_DWORD *)ReasonSpecificData + 2) < 0x44u )
    {
      v9 = *ReasonSpecificData;
      *((_DWORD *)ReasonSpecificData + 10) = 0;
      ReasonSpecificData[4] = v9;
    }
    else
    {
      v6 = (_DWORD *)*ReasonSpecificData;
      v7 = *ReasonSpecificData + 8LL;
      *v6 = 1213614404;
      v6[1] = 68;
      HviGetHypervisorVendorAndMaxFunction(v7, Record, ReasonSpecificData, ReasonSpecificDataLength);
      HviGetHypervisorInterface(v6 + 6, v8);
      HviGetHypervisorVersion(v6 + 10);
      v6[14] = HvlpFlags;
      v6[15] = HvlpRootFlags;
      v6[16] = HvlpEnlightenments;
      ReasonSpecificData[4] = v6;
      *((_DWORD *)ReasonSpecificData + 10) = 68;
    }
  }
  else
  {
    *((_DWORD *)ReasonSpecificData + 10) = 68;
  }
}
