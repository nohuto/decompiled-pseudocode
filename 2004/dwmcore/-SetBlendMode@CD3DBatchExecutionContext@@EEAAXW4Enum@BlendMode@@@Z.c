/*
 * XREFs of ?SetBlendMode@CD3DBatchExecutionContext@@EEAAXW4Enum@BlendMode@@@Z @ 0x1800BE750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x1801ABCAC (-EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ.c)
 */

void __fastcall CD3DBatchExecutionContext::SetBlendMode(__int64 a1, int a2)
{
  __int64 v2; // rdi
  int v4; // r9d
  __int64 v5; // rsi
  char v6; // al

  v2 = a2;
  if ( a2 != *(_DWORD *)(a1 + 64) )
  {
    v4 = 4;
    if ( (*(_DWORD *)(a1 + 64) == 22) != (a2 == 22) )
      v4 = -2147483642;
    *(_DWORD *)(a1 + 40) |= v4;
    v5 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v5 + 40) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v5 + 16) + 600LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v5 + 16) + 600LL),
        *(_QWORD *)(v5 + 24),
        0LL);
      *(_QWORD *)(v5 + 40) = 0LL;
      *(_DWORD *)(v5 + 48) = 0;
      v6 = *(_BYTE *)(a1 + 82);
      if ( v6 )
      {
        if ( v6 == 2 )
        {
          CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(*(_QWORD *)(a1 + 32) + 112LL));
          CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v5 + 64));
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(**(_QWORD **)(a1 + 16) + 160LL))(
            *(_QWORD *)(a1 + 16),
            *(unsigned int *)(a1 + 100),
            *(unsigned int *)(a1 + 104),
            *(unsigned int *)(a1 + 88),
            0,
            *(_DWORD *)(a1 + 92));
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 104LL))(
            *(_QWORD *)(a1 + 16),
            *(unsigned int *)(a1 + 96),
            *(unsigned int *)(a1 + 84));
        }
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v5 + 64) + 600LL) + 120LL))(
          *(_QWORD *)(*(_QWORD *)(v5 + 64) + 600LL),
          *(_QWORD *)(v5 + 72),
          0LL);
        *(_QWORD *)(v5 + 88) = 0LL;
        *(_DWORD *)(v5 + 96) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 96LL))(
          *(_QWORD *)(a1 + 16),
          *(unsigned int *)(a1 + 100),
          *(unsigned int *)(a1 + 88),
          0LL);
      }
      ++*(_DWORD *)(a1 + 112);
      *(_DWORD *)(a1 + 96) = 0;
      *(_DWORD *)(a1 + 100) = 0;
      *(_DWORD *)(a1 + 104) = 0;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 280LL))(
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v2 + 1616),
      0LL,
      0xFFFFFFFFLL);
    *(_DWORD *)(a1 + 64) = v2;
  }
}
