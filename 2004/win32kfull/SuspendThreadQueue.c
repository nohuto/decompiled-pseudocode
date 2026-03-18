/*
 * XREFs of SuspendThreadQueue @ 0x1C010D6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     DelQEntry @ 0x1C00B0784 (DelQEntry.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B328C (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     xxxReceiverDied @ 0x1C00BC0A8 (xxxReceiverDied.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C00BE760 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 *     UnlinkSendListSms @ 0x1C00BEB58 (UnlinkSendListSms.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C0104B30 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 */

void __fastcall SuspendThreadQueue(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rbx
  __int64 *v6; // rbx
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  __int64 *v9; // rbp
  __int64 *v10; // rbp
  __int64 v12; // rax
  __int64 v14; // rbx
  _QWORD *v15; // rdx
  bool v16; // zf
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+70h] [rbp+8h] BYREF

  v24 = a1;
  v1 = a1;
  if ( (*(_DWORD *)(a1 + 480) & 0x1000001) == 0x1000000 )
  {
    v2 = *(_QWORD *)(a1 + 424);
    CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)&v23, v2);
    v5 = *(__int64 **)(v2 + 24);
    if ( v5 )
    {
      do
      {
        v9 = (__int64 *)*v5;
        if ( *((_DWORD *)v5 + 24) == 9
          && v5 != *(__int64 **)(v2 + 80)
          && v5 != *(__int64 **)(v2 + 72)
          && (*((_DWORD *)v5 + 25) & 0x100) == 0 )
        {
          v12 = *((unsigned int *)v5 + 6);
          if ( !((unsigned int)v12 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v12] >> 10) & 7) )
          {
            CleanEventMessage((struct tagQMSG *)v5);
            DelQEntry((unsigned int **)(v2 + 24), (unsigned int *)v5, 1);
          }
        }
        v5 = v9;
      }
      while ( v9 );
      v1 = v24;
    }
    v6 = *(__int64 **)(v1 + 800);
    if ( v6 )
    {
      do
      {
        v10 = (__int64 *)*v6;
        if ( v6 != *(__int64 **)(v2 + 80) && v6 != *(__int64 **)(v2 + 72) && (*((_DWORD *)v6 + 25) & 0x100) == 0 )
        {
          v3 = *((unsigned int *)v6 + 6);
          if ( !((unsigned int)v3 < 0x400 ? ((unsigned __int16)MessageTable[v3] >> 10) & 7 : 1) )
          {
            CleanInputMessage(v3, (struct tagQMSG *)v6, v3, v4);
            DelQEntry((unsigned int **)(v1 + 800), (unsigned int *)v6, 1);
          }
        }
        v6 = v10;
      }
      while ( v10 );
      v1 = v24;
    }
    v7 = (_QWORD *)(v1 + 512);
    v8 = *(_QWORD **)(v1 + 512);
    if ( v8 != (_QWORD *)(v1 + 512) )
    {
      do
      {
        v14 = (__int64)(v8 - 2);
        v15 = v8;
        v16 = v8[6] == 0LL;
        v8 = (_QWORD *)*v8;
        if ( v16 )
        {
          v17 = *(_DWORD *)(v14 + 84);
          if ( (v17 & 0x4000) == 0 )
          {
            v18 = *(_QWORD *)(v14 + 32);
            if ( v18 )
            {
              if ( !PsGetProcessCommonJob(**(_QWORD **)(v1 + 416), **(_QWORD **)(v18 + 416)) )
              {
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v24);
                xxxReceiverDied(v14);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v24);
              }
            }
            else if ( (v17 & 8) != 0 )
            {
              v19 = *(unsigned int *)(v14 + 104);
              if ( !((unsigned int)v19 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v19] >> 10) & 7) )
              {
                --*(_DWORD *)(v1 + 528);
                v21 = *v15;
                if ( *(_QWORD **)(*v15 + 8LL) != v15 || (v22 = (_QWORD *)v15[1], (_QWORD *)*v22 != v15) )
                  __fastfail(3u);
                *v22 = v21;
                *(_QWORD *)(v21 + 8) = v22;
                *v15 = 0LL;
                if ( (_QWORD *)*v7 == v7 )
                {
                  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 40) + 440LL) + 6LL) &= ~0x40u;
                  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 40) + 440LL) + 4LL) &= ~0x40u;
                }
                UnlinkSendListSms((__int64 *)v14, (__int64)v15, v3, v4);
              }
            }
          }
        }
      }
      while ( v8 != v7 );
    }
    *(_DWORD *)(v1 + 1224) |= 0x20u;
  }
}
