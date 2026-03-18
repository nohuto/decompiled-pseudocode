/*
 * XREFs of ?xxxQueryLegacyActivation@@YGJPAUtagWND@@0FPBUtagPOINTEREVENTINT@@@Z @ 0x15B7A9
 * Callers:
 *     ?xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z @ 0x15B536 (-xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _GetDPITransformationMonitor@12 @ 0x1510B9 (_GetDPITransformationMonitor@12.c)
 */

int __userpurge xxxQueryLegacyActivation@<eax>(
        _DWORD *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagWND *a3,
        struct tagWND *a4,
        __int16 a5,
        const struct tagPOINTEREVENTINT *a6)
{
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // ecx
  int v13; // ecx
  int DPITransformationMonitor; // [esp+Ch] [ebp-24h] BYREF
  _DWORD *v16; // [esp+10h] [ebp-20h]
  int v17; // [esp+14h] [ebp-1Ch]
  int v18; // [esp+18h] [ebp-18h]
  int v19; // [esp+1Ch] [ebp-14h] BYREF
  int v20; // [esp+20h] [ebp-10h]
  int v21; // [esp+24h] [ebp-Ch]
  int v22; // [esp+28h] [ebp-8h]
  int v23; // [esp+2Ch] [ebp-4h]

  v16 = a1;
  v19 = 0;
  v20 = 0;
  if ( *(_DWORD *)(*(_DWORD *)(a2[2] + 236) + 56) )
    return 3;
  v7 = *(_DWORD *)(_gptiCurrent + 428);
  v21 = *(_DWORD *)(_gptiCurrent + 416);
  v17 = v7;
  v18 = *(_DWORD *)(_gptiCurrent + 432);
  v8 = *((_DWORD *)a4 + 8);
  v22 = *(_DWORD *)(_gptiCurrent + 420);
  v23 = *(_DWORD *)(_gptiCurrent + 424);
  *(_DWORD *)(_gptiCurrent + 428) = v8;
  *(_DWORD *)(_gptiCurrent + 432) = *((_DWORD *)a4 + 9);
  v9 = a2[5];
  v10 = *((_DWORD *)a4 + 8);
  v11 = *((_DWORD *)a4 + 9);
  v19 = v10;
  v20 = v11;
  if ( (*(_DWORD *)(v9 + 184) & 0xF) != 2 )
  {
    DPITransformationMonitor = GetDPITransformationMonitor(a2, v10, v11);
    PhysicalToLogicalDPIPoint(&v19, &v19, 0, &DPITransformationMonitor);
    v10 = v19;
  }
  *(_DWORD *)(_gptiCurrent + 416) = v10;
  *(_DWORD *)(_gptiCurrent + 420) = v20;
  v12 = v16 ? *v16 : 0;
  _InterlockedIncrement(&glSendMessage);
  v13 = xxxSendTransformableMessageTimeout((int)a2, 0x21u, v12, (unsigned __int16)a3 | 0x2460000, 0, 0, 0, 1u, 1);
  *(_DWORD *)(_gptiCurrent + 428) = v17;
  *(_DWORD *)(_gptiCurrent + 432) = v18;
  *(_DWORD *)(_gptiCurrent + 416) = v21;
  *(_DWORD *)(_gptiCurrent + 420) = v22;
  *(_DWORD *)(_gptiCurrent + 424) = v23;
  if ( v13 == 3 || v13 == 4 )
    return 3;
  else
    return 1;
}
