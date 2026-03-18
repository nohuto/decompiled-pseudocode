/*
 * XREFs of ??$ReadData@_N@CFlipBlobPropertyReader@@QEAA_NPEA_N@Z @ 0x1C006D550
 * Callers:
 *     ?ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PEAVCFlipContentToken@@@Z @ 0x1C006D5C0 (-ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PE.c)
 * Callees:
 *     <none>
 */

char __fastcall CFlipBlobPropertyReader::ReadData<bool>(__int64 a1, bool *a2)
{
  int v2; // r9d
  char v3; // r8
  char result; // al

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  result = 0;
  if ( v2 )
  {
    v3 = *(_BYTE *)(*(_QWORD *)a1)++;
    *(_DWORD *)(a1 + 8) = v2 - 1;
    result = 1;
  }
  *a2 = v3 != 0;
  return result;
}
