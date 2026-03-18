/*
 * XREFs of IncVisWindows @ 0x1C00927E4
 * Callers:
 *     SetMinimize @ 0x1C001878C (SetMinimize.c)
 *     xxxSetWindowStyle @ 0x1C00583F0 (xxxSetWindowStyle.c)
 *     SetVisible @ 0x1C00925D0 (SetVisible.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C0048CE4 (_GetWindowCompositionInfo.c)
 *     FVisCountable @ 0x1C0092900 (FVisCountable.c)
 */

__int64 __fastcall IncVisWindows(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // rcx
  _OWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  result = FVisCountable(a1, a2, a3, a4, 0LL);
  if ( (_DWORD)result )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(v6 + 424);
    ++*(_DWORD *)(v6 + 900);
    ++*(_DWORD *)(v7 + 1024);
    if ( (unsigned int)GetWindowCompositionInfo(a1, (__int64)v9) && ((v9[0] & 0x400) != 0 || (v9[0] & 0x800) != 0) )
      ++*(_DWORD *)(*(_QWORD *)(v6 + 424) + 1028LL);
    v8 = *(_DWORD **)(v6 + 424);
    if ( v8[256] > v8[257] && (v8[205] & 0x4000) == 0 )
    {
      GreDxgkSetProcessStatus(v8, 2LL);
      PsUpdateComponentPower(**(_QWORD **)(v6 + 424), 5LL);
      *(_DWORD *)(*(_QWORD *)(v6 + 424) + 820LL) |= 0x4000u;
    }
    *(_QWORD *)(v6 + 1232) |= 0x200000000uLL;
    return EtwTraceProcessWindowInfo(v6);
  }
  return result;
}
