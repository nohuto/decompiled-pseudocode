/*
 * XREFs of ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x1C01CEB08
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0057F10 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00585DC (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?Grow@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C01DE698 (-Grow@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?Grow@?$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z @ 0x1C01E68D0 (-Grow@-$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?OwnsPointerId@CInputManager@@SA_NII@Z @ 0x1C01F49AC (-OwnsPointerId@CInputManager@@SA_NII@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CapturePointer(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5)
{
  int v9; // ebx
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  _OWORD *v12; // rax
  __int128 v14; // [rsp+20h] [rbp-18h]

  if ( !CInputManager::OwnsPointerId(*(_DWORD *)(a1 + 696), a4) )
    return (unsigned int)-1073741790;
  v10 = (unsigned int)(a2 - 1);
  if ( a2 && v10 < *(_QWORD *)(a1 + 80) )
  {
    _mm_lfence();
    v11 = *(_QWORD *)(v10 * *(_QWORD *)(a1 + 88) + *(_QWORD *)(a1 + 56));
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 96LL))(v11, 87LL) )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v9 = CDynamicArray<unsigned int,2003858261>::Grow(v11 + 280);
    if ( v9 >= 0 )
    {
      *(_DWORD *)(*(_QWORD *)(v11 + 280) + 4LL * (unsigned int)(*(_DWORD *)(v11 + 288))++) = a4;
      *(_DWORD *)(v11 + 16) |= 0x80u;
    }
    goto LABEL_22;
  }
  if ( a3 != 1 )
    return (unsigned int)-1073741811;
  *((_QWORD *)&v14 + 1) = a5;
  v9 = 0;
  LODWORD(v14) = a4;
  if ( *(_DWORD *)(v11 + 304) == *(_DWORD *)(v11 + 308) )
  {
    v9 = CDynamicArray<InjectManipulationArgs *,2003858261>::Grow(v11 + 296);
    if ( v9 < 0 )
    {
LABEL_22:
      if ( v9 >= 0 )
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
          (DirectComposition::CApplicationChannel *)a1,
          (struct DirectComposition::CResourceMarshaler *)v11);
      return (unsigned int)v9;
    }
  }
  if ( *(_DWORD *)(v11 + 304) >= *(_DWORD *)(v11 + 308) )
    v9 = -1073741823;
  if ( v9 >= 0 )
  {
    v12 = Win32AllocPoolZInit(0x10uLL, 0x64734344u);
    if ( !v12 )
      v9 = -1073741801;
    if ( v9 >= 0 )
    {
      *v12 = v14;
      *(_QWORD *)(*(_QWORD *)(v11 + 296) + 8LL * (unsigned int)(*(_DWORD *)(v11 + 304))++) = v12;
      goto LABEL_22;
    }
  }
  return (unsigned int)v9;
}
