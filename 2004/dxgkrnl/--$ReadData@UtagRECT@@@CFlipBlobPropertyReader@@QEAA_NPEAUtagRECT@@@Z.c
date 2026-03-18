/*
 * XREFs of ??$ReadData@UtagRECT@@@CFlipBlobPropertyReader@@QEAA_NPEAUtagRECT@@@Z @ 0x1C006D520
 * Callers:
 *     ?ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PEAVCFlipContentToken@@@Z @ 0x1C006D5C0 (-ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PE.c)
 * Callees:
 *     <none>
 */

char __fastcall CFlipBlobPropertyReader::ReadData<tagRECT>(__int128 **a1, _OWORD *a2)
{
  unsigned int v2; // r8d
  char result; // al
  __int128 v4; // xmm0

  v2 = *((_DWORD *)a1 + 2);
  result = 0;
  if ( v2 >= 0x10 )
  {
    v4 = *(*a1)++;
    *((_DWORD *)a1 + 2) = v2 - 16;
    result = 1;
    *a2 = v4;
  }
  return result;
}
