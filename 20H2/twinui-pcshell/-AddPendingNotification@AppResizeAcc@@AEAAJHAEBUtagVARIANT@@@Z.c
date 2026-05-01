/*
 * XREFs of ?AddPendingNotification@AppResizeAcc@@AEAAJHAEBUtagVARIANT@@@Z @ 0x18041932C
 * Callers:
 *     ?RaisePropertyChangeNotification@AppResizeAcc@@AEAAXH@Z @ 0x180419A08 (-RaisePropertyChangeNotification@AppResizeAcc@@AEAAXH@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1801503C4 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180155124 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?RemoveAt@?$CTSimpleArray@PEAUUiaPropertyChangedEventArgs@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUUiaPropertyChangedEventArgs@@@@V?$CSimpleArrayStandardCompareHelper@PEAUUiaPropertyChangedEventArgs@@@@V?$CSimpleArrayStandardMergeHelper@PEAUUiaPropertyChangedEventArgs@@@@@@QEAAJ_K@Z @ 0x180419B88 (-RemoveAt@-$CTSimpleArray@PEAUUiaPropertyChangedEventArgs@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUU.c)
 */

__int64 __fastcall AppResizeAcc::AddPendingNotification(AppResizeAcc *this, int a2, const struct tagVARIANT *a3)
{
  char *v6; // rax
  void *v7; // r8
  void *v8; // rsi
  int Error; // ebx
  IRecordInfo *pRecInfo; // xmm1_8
  __int64 v11; // rdx
  _QWORD *v12; // rdx

  v6 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 2) = a2;
    *(_OWORD *)(v6 + 40) = *(_OWORD *)&a3->vt;
    pRecInfo = a3->pRecInfo;
    Error = 0;
    *((_QWORD *)v6 + 7) = pRecInfo;
    v11 = *((_QWORD *)this + 16);
    if ( v11 != *((_QWORD *)this + 18)
      || (Error = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)this + 120,
                    v11 + 1,
                    v7),
          Error >= 0) )
    {
      v12 = (_QWORD *)(*((_QWORD *)this + 15) + 8 * (*((_QWORD *)this + 16))++);
      if ( v12 )
        *v12 = v8;
    }
    if ( Error < 0 )
      goto LABEL_12;
    if ( *((_QWORD *)this + 16) == 1LL && !PostMessageW(*((HWND *)this + 5), 0x8001u, 0LL, 0LL) )
      Error = ResultFromKnownLastError();
    if ( Error < 0 )
    {
LABEL_12:
      operator delete(v8, (const struct std::nothrow_t *)0x40);
      CTSimpleArray<UiaPropertyChangedEventArgs *,4294967294,CTPolicyCoTaskMem<UiaPropertyChangedEventArgs *>,CSimpleArrayStandardCompareHelper<UiaPropertyChangedEventArgs *>,CSimpleArrayStandardMergeHelper<UiaPropertyChangedEventArgs *>>::RemoveAt(
        (char *)this + 120,
        *((_QWORD *)this + 16) - 1LL);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)Error;
}
