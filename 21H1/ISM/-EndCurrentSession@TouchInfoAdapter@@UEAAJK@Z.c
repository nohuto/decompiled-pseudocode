/*
 * XREFs of ?EndCurrentSession@TouchInfoAdapter@@UEAAJK@Z @ 0x18019A0C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800971D4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 */

__int64 __fastcall TouchInfoAdapter::EndCurrentSession(TouchInfoAdapter *this)
{
  char *v1; // rdx
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rdi
  unsigned __int64 v7; // rcx

  v1 = (char *)this + 112;
  *((_WORD *)this + 57) |= 4u;
  v3 = 0;
  if ( *((_BYTE *)this + 135) )
  {
    do
    {
      v4 = 56LL * v3++;
      *(_WORD *)&v1[v4 + 26] = (v1[v4 + 26] & 3) != 0 ? 4 : 0;
    }
    while ( v3 < (unsigned __int8)v1[23] );
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3));
  ++*((_DWORD *)this + 26);
  *((_BYTE *)this + 696) = 0;
  *((_WORD *)this + 54) = 0;
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v5,
    *((_QWORD ***)this + 6));
  **((_QWORD **)this + 6) = *((_QWORD *)this + 6);
  *(_QWORD *)(*((_QWORD *)this + 6) + 8LL) = *((_QWORD *)this + 6);
  *((_QWORD *)this + 7) = 0LL;
  v6 = (void *)*((_QWORD *)this + 8);
  v7 = (unsigned __int64)(*((_QWORD *)this + 9) - (_QWORD)v6 + 7LL) >> 3;
  if ( (unsigned __int64)v6 > *((_QWORD *)this + 9) )
    v7 = 0LL;
  if ( v7 )
    memset64(v6, *((_QWORD *)this + 6), v7);
  return 0LL;
}
