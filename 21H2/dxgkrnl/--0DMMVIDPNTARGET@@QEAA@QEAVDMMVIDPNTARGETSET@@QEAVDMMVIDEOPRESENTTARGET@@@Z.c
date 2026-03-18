/*
 * XREFs of ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000C834
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C018A4B0 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C01A6FD0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

DMMVIDPNTARGET *__fastcall DMMVIDPNTARGET::DMMVIDPNTARGET(
        DMMVIDPNTARGET *this,
        struct DMMVIDPNTARGETSET *const a2,
        struct DMMVIDEOPRESENTTARGET *const a3,
        __int64 a4)
{
  int v4; // eax
  __int64 Pool2; // rax
  unsigned __int8 (__fastcall ***v9)(_QWORD); // rdi
  unsigned __int8 (__fastcall ***v10)(_QWORD); // rcx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d

  v4 = *((_DWORD *)a3 + 6);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = v4;
  if ( v4 == -1 )
  {
    WdLogSingleEntry1(1LL, 240LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v17,
          v16,
          v18,
          0,
          2,
          -1,
          (__int64)L"i_Id != D3DDDI_ID_UNINITIALIZED",
          240LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &DMMVIDPNTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNTARGET::`vftable'{for `ContainedBy<DMMVIDPNTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGET::`vftable'{for `NonReferenceCounted'};
  *((_DWORD *)this + 14) = 1833173001;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 12) = a3;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 22) = 1;
  _InterlockedAdd((volatile signed __int32 *)a3 + 18, 1u);
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
      WdLogSingleEntry0(1LL);
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    WdLogSingleEntry2(2LL, (char *)this + 32, *((_QWORD *)this + 5));
  }
  Pool2 = ExAllocatePool2(256LL, 48LL, 1313891414LL, a4);
  v9 = (unsigned __int8 (__fastcall ***)(_QWORD))Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 8) = 0;
    *(_QWORD *)Pool2 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`vftable';
    *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_DWORD *)(Pool2 + 40) = 2;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = (unsigned __int8 (__fastcall ***)(_QWORD))*((_QWORD *)this + 15);
  if ( v9 != v10 && v10 )
    ((void (__fastcall *)(unsigned __int8 (__fastcall ***)(_QWORD), __int64))(*v10)[2])(v10, 1LL);
  *((_QWORD *)this + 15) = v9;
  if ( v9 )
  {
    if ( (**v9)(v9) )
    {
      while ( 1 )
      {
        v12 = ExAllocatePool2(256LL, 152LL, 1313891414LL, v11);
        v13 = v12;
        if ( v12 )
          break;
        WdLogSingleEntry0(6LL);
        ZwYieldExecution();
      }
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 0LL;
      *(_QWORD *)v12 = &SetElement::`vftable';
      *(_QWORD *)(v12 + 32) = &DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::`vftable';
      *(_QWORD *)(v12 + 56) = v12 + 48;
      *(_QWORD *)(v12 + 48) = v12 + 48;
      *(_QWORD *)(v12 + 24) = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
      *(_DWORD *)(v12 + 40) = 0;
      *(_QWORD *)(v12 + 64) = 0LL;
      *(_DWORD *)(v12 + 72) = 2;
      *(_DWORD *)(v12 + 80) = 0;
      *(_QWORD *)(v12 + 88) = &ReferenceCounted::`vftable';
      *(_DWORD *)(v12 + 96) = 1;
      *(_BYTE *)(v12 + 136) = 1;
      *(_QWORD *)(v12 + 112) = 0LL;
      *(_DWORD *)(v12 + 128) = 1833173005;
      *(_QWORD *)v12 = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
      *(_QWORD *)(v12 + 24) = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
      *(_QWORD *)(v12 + 88) = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
      *(_QWORD *)(v12 + 104) = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
      *(_QWORD *)(v12 + 120) = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
      *(_QWORD *)(v12 + 144) = 0LL;
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v12 + 32))(v12 + 32) )
      {
        if ( *(_QWORD *)(v13 + 112) )
          WdLogSingleEntry0(1LL);
        *(_QWORD *)(v13 + 112) = this;
      }
      else
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *(int *)(v13 + 40);
      }
      v14 = *((_QWORD *)this + 13);
      if ( v14 && v13 != v14 )
        ReferenceCounted::Release((ReferenceCounted *)(v14 + 88));
      *((_QWORD *)this + 13) = v13;
      *((_DWORD *)this + 22) = 2;
    }
    else
    {
      WdLogSingleEntry2(7LL, this, *((unsigned int *)this + 6));
      *((_DWORD *)this + 18) = *(_DWORD *)(*((_QWORD *)this + 15) + 8LL);
    }
  }
  else
  {
    WdLogSingleEntry2(6LL, this, *((unsigned int *)this + 6));
    *((_DWORD *)this + 18) = -1073741801;
  }
  return this;
}
