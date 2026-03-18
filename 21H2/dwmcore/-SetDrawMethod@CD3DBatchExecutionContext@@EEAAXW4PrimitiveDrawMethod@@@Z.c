/*
 * XREFs of ?SetDrawMethod@CD3DBatchExecutionContext@@EEAAXW4PrimitiveDrawMethod@@@Z @ 0x1800D08B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x1801F1630 (-EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ.c)
 */

int __fastcall CD3DBatchExecutionContext::SetDrawMethod(__int64 a1, char a2)
{
  _QWORD *v2; // rax
  CD3DDynamicAppendBuffer *v5; // rsi
  char v6; // al

  LODWORD(v2) = 0;
  if ( a2 == 2 )
    LODWORD(v2) = 4096;
  if ( a2 != *(_BYTE *)(a1 + 82) )
  {
    LODWORD(v2) = (unsigned int)v2 | 0x200;
    if ( a2 == 2 || *(_BYTE *)(a1 + 82) == 2 )
      LODWORD(v2) = (unsigned int)v2 | 0x80000000;
  }
  if ( (_DWORD)v2 )
  {
    *(_DWORD *)(a1 + 40) |= (unsigned int)v2;
    v2 = *(_QWORD **)(a1 + 32);
    if ( v2[5] )
    {
      v5 = (CD3DDynamicAppendBuffer *)(v2 + 8);
      CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v2 + 2));
      v6 = *(_BYTE *)(a1 + 82);
      if ( v6 )
      {
        if ( v6 == 2 )
        {
          CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(*(_QWORD *)(a1 + 32) + 112LL));
          CD3DDynamicAppendBuffer::EndAppend(v5);
          LODWORD(v2) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(**(_QWORD **)(a1 + 16)
                                                                                                  + 160LL))(
                          *(_QWORD *)(a1 + 16),
                          *(unsigned int *)(a1 + 100),
                          *(unsigned int *)(a1 + 104),
                          *(unsigned int *)(a1 + 88),
                          0,
                          *(_DWORD *)(a1 + 92));
        }
        else
        {
          LODWORD(v2) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 104LL))(
                          *(_QWORD *)(a1 + 16),
                          *(unsigned int *)(a1 + 96),
                          *(unsigned int *)(a1 + 84));
        }
      }
      else
      {
        CD3DDynamicAppendBuffer::EndAppend(v5);
        LODWORD(v2) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 96LL))(
                        *(_QWORD *)(a1 + 16),
                        *(unsigned int *)(a1 + 100),
                        *(unsigned int *)(a1 + 88),
                        0LL);
      }
      ++*(_DWORD *)(a1 + 124);
      *(_DWORD *)(a1 + 96) = 0;
      *(_DWORD *)(a1 + 100) = 0;
      *(_DWORD *)(a1 + 104) = 0;
    }
  }
  *(_BYTE *)(a1 + 82) = a2;
  return (int)v2;
}
