/*
 * XREFs of ?DestroyClassBrush@@YGXABV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x47A58
 * Callers:
 *     _DestroyClass@8 @ 0x472A4 (_DestroyClass@8.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z @ 0x983B8 (--4-$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z.c)
 */

_DWORD *__thiscall DestroyClassBrush(void *this)
{
  int CurrentProcessWin32Process; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  unsigned int v6; // edi
  _DWORD **v7; // [esp+10h] [ebp-8h] BYREF
  int v8; // [esp+14h] [ebp-4h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v7 = (_DWORD **)gSmartObjNullRef;
  v8 = *(_DWORD *)(ThreadWin32Thread + 840);
  *(_DWORD *)(ThreadWin32Thread + 840) = &v8;
  if ( *(_DWORD *)(*(_DWORD *)(**(_DWORD **)this + 4) + 44) > 0x1Fu )
  {
    v6 = 4292;
    while ( *(_DWORD *)(*(_DWORD *)(**(_DWORD **)this + 4) + 44) != *(_DWORD *)(v6 + _gpsi) )
    {
      v6 += 4;
      if ( v6 >= 0x1140 )
      {
        SmartObjStackRefBase<tagCLS>::operator=(*(_DWORD *)(CurrentProcessWin32Process + 196));
        while ( *v7 )
        {
          if ( *v7 != **(_DWORD ***)this
            && *(_DWORD *)((*v7)[1] + 44) == *(_DWORD *)(*(_DWORD *)(**(_DWORD **)this + 4) + 44) )
          {
            return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v7);
          }
          SmartObjStackRefBase<tagCLS>::operator=(**v7);
        }
        SmartObjStackRefBase<tagCLS>::operator=(*(_DWORD *)(CurrentProcessWin32Process + 192));
        while ( *v7 )
        {
          if ( *v7 != **(_DWORD ***)this
            && *(_DWORD *)((*v7)[1] + 44) == *(_DWORD *)(*(_DWORD *)(**(_DWORD **)this + 4) + 44) )
          {
            return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v7);
          }
          SmartObjStackRefBase<tagCLS>::operator=(**v7);
        }
        GreDeleteObject(*(_DWORD *)(*(_DWORD *)(**(_DWORD **)this + 4) + 44));
        return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v7);
      }
    }
  }
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v7);
}
