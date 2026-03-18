/*
 * XREFs of ?UnlockPopupMenuWindow@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagWND@@@Z @ 0x196A86
 * Callers:
 *     _LockPopupMenu@12 @ 0x197533 (_LockPopupMenu@12.c)
 *     _UnlockPopupMenu@8 @ 0x197868 (_UnlockPopupMenu@8.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z @ 0x2D4BC (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NH@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NQAUtagMENU@@@Z @ 0x8EDE4 (--8-$SmartObjStackRef@UtagMENU@@@@QBE_NQAUtagMENU@@@Z.c)
 */

char __thiscall UnlockPopupMenuWindow(_DWORD *this)
{
  int v1; // eax
  int **v2; // ecx
  int **v3; // ecx
  int v4; // edx
  int v5; // ecx

  LOBYTE(v1) = SmartObjStackRef<tagMENU>::operator==(this, (int)this);
  if ( !(_BYTE)v1 )
  {
    v1 = **v2;
    if ( *(_DWORD *)(v1 + 52) )
    {
      LOBYTE(v1) = SmartObjStackRef<tagMENU>::operator==(v2, *(int **)(*(_DWORD *)(**v2 + 52) + 92));
      if ( !(_BYTE)v1 )
      {
        LOBYTE(v1) = SmartObjStackRef<tagMENU>::operator==(v3, *(int **)(*(_DWORD *)(**v3 + 52) + 88));
        if ( !(_BYTE)v1 )
        {
          if ( v4 == *(_DWORD *)(**(_DWORD **)v5 + 52)
            || (v1 = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)v5 + 52) + 20), *(char *)(v1 + 11) < 0) )
          {
            LOBYTE(v1) = HMAssignmentUnlock(**(_DWORD **)v5 + 52);
          }
        }
      }
    }
  }
  return v1;
}
