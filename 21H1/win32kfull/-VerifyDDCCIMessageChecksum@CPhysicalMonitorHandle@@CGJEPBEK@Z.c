/*
 * XREFs of ?VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CGJEPBEK@Z @ 0x1CFF33
 * Callers:
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z @ 0x1CF957 (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z.c)
 * Callees:
 *     ?ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle@@CGEEPBEK@Z @ 0x1CEFF9 (-ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle@@CGEEPBEK@Z.c)
 */

int __userpurge CPhysicalMonitorHandle::VerifyDDCCIMessageChecksum@<eax>(
        int a1@<edx>,
        unsigned int a2,
        const unsigned __int8 *a3,
        unsigned int a4)
{
  unsigned __int8 v4; // al
  unsigned int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  bool v10; // zf
  int v11; // eax
  int v12; // eax
  char v13; // al
  int v14; // edx
  const unsigned __int8 *v15; // [esp+0h] [ebp-4h]
  unsigned int savedregs; // [esp+4h] [ebp+0h]

  if ( a2 < 3 )
    return -1071774328;
  v4 = *(_BYTE *)(a1 + 2);
  if ( !v4 )
    return -1071774327;
  if ( v4 > 3u && v4 != 7 && v4 != 12 )
  {
    if ( v4 == 78 )
    {
      v6 = 9;
      goto LABEL_12;
    }
    if ( v4 != 0xE3 && v4 != 0xF3 )
      return -1071774327;
  }
  v6 = (*(_BYTE *)(a1 + 1) & 0x7F) + 3;
  if ( (*(_BYTE *)(a1 + 1) & 0x7F) == 0xFFFFFFFD )
    return -1071774326;
LABEL_12:
  if ( a2 < v6 )
    return -1071774326;
  if ( v4 <= 0xCu )
  {
    if ( v4 == 12 )
      goto LABEL_30;
    v7 = v4 - 1;
    if ( !v7 )
      goto LABEL_30;
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 == 4;
        goto LABEL_19;
      }
      goto LABEL_30;
    }
    if ( v6 == 11 )
      goto LABEL_30;
    return -1071774326;
  }
  v11 = v4 - 78;
  if ( !v11 )
  {
    if ( v6 == 9 )
      goto LABEL_30;
    return -1071774326;
  }
  v12 = v11 - 149;
  if ( v12 )
  {
    v10 = v12 == 16;
LABEL_19:
    if ( !v10 )
      return -1071774328;
    goto LABEL_30;
  }
  if ( v6 < 6 || v6 > 0x26 )
    return -1071774326;
LABEL_30:
  v13 = CPhysicalMonitorHandle::ComputeDDCCIMessageChecksum(a1, 111, v6 - 1, v15, savedregs);
  if ( *(_BYTE *)(v6 + v14 - 1) == v13 )
    return 0;
  else
    return -1071774325;
}
