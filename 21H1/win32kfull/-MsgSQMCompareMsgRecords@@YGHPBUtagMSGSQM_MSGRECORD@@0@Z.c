/*
 * XREFs of ?MsgSQMCompareMsgRecords@@YGHPBUtagMSGSQM_MSGRECORD@@0@Z @ 0x180C4F
 * Callers:
 *     ?MsgSQMGetMsgRecord@@YGPAUtagMSGSQM_MSGRECORD@@PAPAU1@PBU1@K@Z @ 0x180E96 (-MsgSQMGetMsgRecord@@YGPAUtagMSGSQM_MSGRECORD@@PAPAU1@PBU1@K@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall MsgSQMCompareMsgRecords(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // esi
  unsigned int v5; // edi
  unsigned int v7; // eax
  unsigned int v8; // ecx

  v2 = a2[1];
  v3 = a1[2];
  v4 = a1[1];
  v5 = a2[2];
  if ( v3 > v5 )
    return 1;
  if ( v3 < v5 || v4 < v2 )
    return -1;
  if ( __PAIR64__(v3, v4) > __PAIR64__(v5, v2) )
    return 1;
  v7 = a1[3];
  v8 = a2[3];
  if ( v8 <= v7 )
    return v8 < v7;
  else
    return -1;
}
