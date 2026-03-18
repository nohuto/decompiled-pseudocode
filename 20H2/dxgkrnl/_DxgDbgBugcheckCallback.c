/*
 * XREFs of _DxgDbgBugcheckCallback @ 0x1C0042C20
 * Callers:
 *     <none>
 * Callees:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C0043E9C (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 */

void __fastcall DxgDbgBugcheckCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int64 v4; // rcx
  bool v5; // zf
  unsigned int v6; // ecx
  __int128 v7; // xmm0
  unsigned int v8; // eax
  unsigned int v9; // edx
  void *v10; // rcx

  if ( Reason == KbCallbackSecondaryDumpData )
  {
    if ( KiBugCheckData == 278 && qword_1C00B2568 )
    {
      v4 = (unsigned int)(dword_1C00B2564 - 1);
      if ( dword_1C00B2564 != 1 )
      {
        do
        {
          if ( *(_BYTE *)(v4 + qword_1C00B2568) )
            break;
          v5 = (_DWORD)v4 == 1;
          v4 = (unsigned int)(v4 - 1);
        }
        while ( !v5 );
      }
      v6 = v4 + 1;
      v7 = xmmword_1C00B1118;
      ReasonSpecificData[4] = qword_1C00B2568;
      v8 = *((_DWORD *)ReasonSpecificData + 3);
      *((_OWORD *)ReasonSpecificData + 1) = v7;
      if ( v6 >= v8 )
        v6 = v8;
      *((_DWORD *)ReasonSpecificData + 10) = v6;
    }
    else
    {
      v5 = ReasonSpecificData[4] == 0LL;
      *((_OWORD *)ReasonSpecificData + 1) = xmmword_1C00B1118;
      if ( v5 )
      {
        v9 = *((_DWORD *)ReasonSpecificData + 3);
        v10 = 0LL;
      }
      else
      {
        v10 = (void *)*ReasonSpecificData;
        v9 = *((_DWORD *)ReasonSpecificData + 2);
        ReasonSpecificData[4] = *ReasonSpecificData;
      }
      *((_DWORD *)ReasonSpecificData + 10) = TdrCollectBugcheckSecondaryDumpData(v10, v9, 0);
    }
  }
}
