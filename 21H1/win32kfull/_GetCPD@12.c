/*
 * XREFs of _GetCPD@12 @ 0xC4588
 * Callers:
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 *     __GetClassInfoEx@20 @ 0x8052E (__GetClassInfoEx@20.c)
 *     _NtUserGetCPD@12 @ 0xC4540 (_NtUserGetCPD@12.c)
 *     _xxxSetClassData@16 @ 0xCBC4C (_xxxSetClassData@16.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z @ 0x97FDC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z @ 0x983B8 (--4-$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z.c)
 */

unsigned int __fastcall GetCPD(int a1, __int16 a2, int a3)
{
  unsigned int v4; // esi
  int *v6; // eax
  __int16 v7; // cx
  __int16 v8; // bx
  int *v9; // eax
  int v10; // edx
  int *v11; // edi
  int v12; // edx
  int v13; // ecx
  int v14; // esi
  int v16; // edx
  int v17; // [esp+0h] [ebp-18h] BYREF
  _DWORD v18[2]; // [esp+10h] [ebp-8h] BYREF

  v4 = 0;
  SmartObjStackRefBase<tagCLS>::Init(v18, 0);
  if ( (a2 & 0x60) != 0 || (a2 & 0x80u) != 0 )
    a1 = *(_DWORD *)(a1 + 76);
  SmartObjStackRefBase<tagCLS>::operator=(v18, a1);
  v6 = *(int **)(*(_DWORD *)v18[0] + 28);
  if ( v6 )
  {
    while ( 1 )
    {
      v16 = v6[5];
      if ( *(_DWORD *)(v16 + 8) == a3 )
      {
        v7 = a2;
        if ( *(_WORD *)(v16 + 12) == a2 )
          break;
      }
      v6 = (int *)v6[7];
      if ( !v6 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v6 = 0;
    v7 = a2;
  }
  v8 = v7;
  if ( v6 )
  {
    v14 = *v6;
    goto LABEL_8;
  }
  v9 = (int *)HMAllocObject(_gptiCurrent, *(_DWORD *)(_gptiCurrent + 248), 7, 36);
  v11 = v9;
  if ( v9 )
  {
    HMAssignmentLock(v9 + 7, v10);
    HMAssignmentLock(v13, v12);
    *(_DWORD *)(v11[5] + 8) = a3;
    *(_WORD *)(v11[5] + 12) = v8;
    v14 = *v11;
LABEL_8:
    v4 = v14 | 0xFFFF0000;
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v17);
  return v4;
}
