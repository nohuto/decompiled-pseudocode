/*
 * XREFs of ?PostNewMessage@CDWMBackchannelManager@@UEAAXPEAVCFlipConsumerMessage@@@Z @ 0x1C006B840
 * Callers:
 *     <none>
 * Callees:
 *     ??$FindProperty@UPresentConfirmedStatistics@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentConfirmedStatistics@@@Z @ 0x1C006B61C (--$FindProperty@UPresentConfirmedStatistics@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentConfirmed.c)
 *     ?PostNewMessage@CBackchannelManager@@UEAAXPEAVCFlipConsumerMessage@@@Z @ 0x1C006BA00 (-PostNewMessage@CBackchannelManager@@UEAAXPEAVCFlipConsumerMessage@@@Z.c)
 */

void __fastcall CDWMBackchannelManager::PostNewMessage(CDWMBackchannelManager *this, struct CFlipConsumerMessage *a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // r8d
  _DWORD *v5; // rcx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  bool v10; // zf
  unsigned int v11; // edx
  int v12; // ecx
  int v13; // ecx
  char v14; // al
  _QWORD *v15; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_DWORD *)a2 + 3);
  v3 = 0;
  v5 = (_DWORD *)*((_QWORD *)a2 + 3);
  if ( !v2 )
    return;
  v7 = *((_QWORD *)a2 + 2);
  while ( 1 )
  {
    v8 = 32LL * v3;
    v9 = *(_QWORD *)(v8 + v7) - *(_QWORD *)&GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)(v8 + v7 + 8) - *(_QWORD *)GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8.Data4;
    v10 = v9 == 0;
    v11 = *(_DWORD *)(v8 + v7 + 16);
    if ( v10 && v11 == 4 )
      break;
    ++v3;
    v5 = (_DWORD *)((char *)v5 + v11);
    if ( v3 >= v2 )
      return;
  }
  if ( !v5 )
    return;
  v12 = *v5 - 1;
  if ( !v12 )
  {
    v14 = *((_BYTE *)this + 40);
LABEL_18:
    if ( (v14 & 1) != 0 )
      CBackchannelManager::PostNewMessage(this, a2);
    return;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v14 = *((_BYTE *)this + 40) >> 1;
    goto LABEL_18;
  }
  if ( v13 == 1 )
  {
    v15 = 0LL;
    CFlipPropertySetBase::FindProperty<PresentConfirmedStatistics>((__int64)a2, &v15);
    if ( v15 )
    {
      if ( *v15 != *((_QWORD *)this + 6) )
      {
        *((_QWORD *)this + 6) = *v15;
        v14 = *((_BYTE *)this + 40) >> 2;
        goto LABEL_18;
      }
    }
  }
}
