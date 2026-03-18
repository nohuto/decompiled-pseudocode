/*
 * XREFs of ??$ReadData@I@CFlipBlobPropertyReader@@QEAA_NPEAI@Z @ 0x1C006D3C4
 * Callers:
 *     ?ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PEAVCFlipContentToken@@@Z @ 0x1C006D490 (-ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PE.c)
 * Callees:
 *     <none>
 */

char __fastcall CFlipBlobPropertyReader::ReadData<unsigned int>(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r9d
  char result; // al
  _DWORD *v4; // r8

  v2 = *(_DWORD *)(a1 + 8);
  result = 0;
  if ( v2 >= 4 )
  {
    v4 = *(_DWORD **)a1;
    *a2 = **(_DWORD **)a1;
    *(_QWORD *)a1 = v4 + 1;
    *(_DWORD *)(a1 + 8) = v2 - 4;
    return 1;
  }
  return result;
}
