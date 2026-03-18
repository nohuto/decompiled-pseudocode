/*
 * XREFs of _SuspendThreadQueue@4 @ 0xA68FC
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UnlinkSendListSms@4 @ 0x439C4 (_UnlinkSendListSms@4.c)
 *     _DelQEntry@12 @ 0x6D770 (_DelQEntry@12.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z @ 0x6FF02 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QAE@AAUtagObjLock@@@Z.c)
 *     ?CleanEventMessage@@YGXPAUtagQMSG@@@Z @ 0x9C3D2 (-CleanEventMessage@@YGXPAUtagQMSG@@@Z.c)
 *     _xxxReceiverDied@4 @ 0xCC50E (_xxxReceiverDied@4.c)
 *     ?CleanInputMessage@@YGXIPAUtagQMSG@@@Z @ 0xF0F02 (-CleanInputMessage@@YGXIPAUtagQMSG@@@Z.c)
 */

void __stdcall SuspendThreadQueue(int a1)
{
  int v1; // edi
  _DWORD *v2; // ebx
  int *v3; // esi
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // ebx
  int *v7; // ecx
  unsigned int v8; // eax
  _DWORD *v10; // edx
  unsigned int v11; // ecx
  _DWORD *v13; // esi
  _DWORD *v14; // edx
  bool v15; // zf
  int v16; // eax
  unsigned int v17; // eax
  _DWORD *v19; // eax
  unsigned int v20; // [esp+0h] [ebp-20h]
  struct tagQMSG *v21; // [esp+4h] [ebp-1Ch]
  int *v22; // [esp+10h] [ebp-10h]
  _DWORD *v23; // [esp+10h] [ebp-10h]
  int v24; // [esp+10h] [ebp-10h]
  _DWORD v25[3]; // [esp+14h] [ebp-Ch] BYREF

  v1 = a1;
  if ( (*(_DWORD *)(a1 + 264) & 0x1000001) == 0x1000000 )
  {
    v2 = *(_DWORD **)(a1 + 236);
    CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(v25, (int)v2);
    v3 = (int *)v2[3];
    if ( v3 )
    {
      do
      {
        v7 = (int *)*v3;
        v22 = (int *)*v3;
        if ( v3[15] == 9 && v3 != (int *)v2[11] && v3 != (int *)v2[10] && (v3[16] & 0x100) == 0 )
        {
          v8 = v3[3];
          if ( !(v8 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v8] >> 10) & 7) )
          {
            CleanEventMessage((struct tagQMSG *)v3);
            DelQEntry(v2 + 3, v3, 1);
            v7 = v22;
          }
        }
        v3 = v7;
      }
      while ( v7 );
    }
    v4 = *(_DWORD **)(a1 + 448);
    if ( v4 )
    {
      do
      {
        v10 = (_DWORD *)*v4;
        v23 = (_DWORD *)*v4;
        if ( v4 != (_DWORD *)v2[11] && v4 != (_DWORD *)v2[10] && (v4[16] & 0x100) == 0 )
        {
          v11 = v4[3];
          if ( !(v11 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v11] >> 10) & 7) )
          {
            CleanInputMessage(v20, v21);
            DelQEntry((_DWORD *)(a1 + 448), v4, 1);
            v10 = v23;
          }
        }
        v4 = v10;
      }
      while ( v10 );
      v1 = a1;
    }
    v5 = (_DWORD *)(v1 + 280);
    v6 = *(_DWORD **)(v1 + 280);
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v6 == v5 )
        {
          *(_DWORD *)(v1 + 688) |= 0x20u;
          return;
        }
        v13 = v6 - 2;
        v14 = v6;
        v15 = v6[6] == 0;
        v6 = (_DWORD *)*v6;
        if ( v15 )
        {
          v16 = v13[11];
          if ( (v16 & 0x4000) == 0 )
            break;
        }
      }
      v1 = a1;
      if ( v13[4] )
        break;
      if ( (v16 & 8) != 0 )
      {
        v17 = v13[14];
        if ( !(v17 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v17] >> 10) & 7) )
        {
          --*(_DWORD *)(a1 + 288);
          v24 = *v14;
          if ( *(_DWORD **)(*v14 + 4) != v14 || (v19 = (_DWORD *)v14[1], (_DWORD *)*v19 != v14) )
            __fastfail(3u);
          *v19 = v24;
          *(_DWORD *)(v24 + 4) = v19;
          *v14 = 0;
          if ( *(_DWORD *)(a1 + 280) == a1 + 280 )
          {
            *(_WORD *)(*(_DWORD *)(v13[5] + 244) + 6) &= ~0x40u;
            *(_WORD *)(*(_DWORD *)(v13[5] + 244) + 4) &= ~0x40u;
          }
          UnlinkSendListSms(v13);
LABEL_45:
          v5 = (_DWORD *)(a1 + 280);
        }
      }
    }
    if ( !PsGetProcessCommonJob(**(_DWORD **)(a1 + 232), **(_DWORD **)(v13[4] + 232)) )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v25);
      xxxReceiverDied(v13);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v25);
    }
    goto LABEL_45;
  }
}
