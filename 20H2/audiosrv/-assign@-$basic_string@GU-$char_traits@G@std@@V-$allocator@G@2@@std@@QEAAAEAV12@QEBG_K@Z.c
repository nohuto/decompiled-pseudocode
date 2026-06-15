/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180057328
 * Callers:
 *     ?InitAdapterInformation@EndpointDevice@@AEAAJXZ @ 0x180056E8C (-InitAdapterInformation@EndpointDevice@@AEAAJXZ.c)
 *     ?InitTopologyIdInfo@EndpointDevice@@AEAAJXZ @ 0x180057074 (-InitTopologyIdInfo@EndpointDevice@@AEAAJXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180060190 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x180066370 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800FC790 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180008E7C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047410 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x18007418F (memcpy_0.c)
 *     memmove_0 @ 0x18007419B (memmove_0.c)
 */

void **__fastcall std::wstring::assign(void **a1, void *Src, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  SIZE_T v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rbp
  char *v13; // rbp
  __int64 v14; // rbx

  v3 = (unsigned __int64)a1[3];
  if ( a3 <= v3 )
  {
    v13 = (char *)a1;
    if ( v3 >= 8 )
      v13 = (char *)*a1;
    v14 = 2 * a3;
    a1[2] = (void *)a3;
    memmove_0(v13, Src, 2 * a3);
    *(_WORD *)&v13[v14] = 0;
  }
  else
  {
    v7 = 0x7FFFFFFFFFFFFFFELL;
    if ( a3 > 0x7FFFFFFFFFFFFFFELL )
      std::_Xlength_error("string too long");
    if ( (a3 | 7) <= 0x7FFFFFFFFFFFFFFELL )
    {
      v8 = v3 >> 1;
      if ( v3 <= 0x7FFFFFFFFFFFFFFELL - (v3 >> 1) )
      {
        v7 = v8 + v3;
        if ( (a3 | 7) >= v8 + v3 )
          v7 = a3 | 7;
      }
    }
    v9 = 2 * (v7 + 1);
    if ( (unsigned __int64)(v7 + 1) > 0x7FFFFFFFFFFFFFFFLL )
      v9 = -1LL;
    v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
    a1[3] = (void *)v7;
    a1[2] = (void *)a3;
    v11 = v10;
    memcpy_0(v10, Src, 2 * a3);
    *((_WORD *)v11 + a3) = 0;
    if ( v3 >= 8 )
      std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)(2 * v3 + 2));
    *a1 = v11;
  }
  return a1;
}
