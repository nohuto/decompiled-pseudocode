/*
 * XREFs of ?OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z @ 0x18009F420
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180067514 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z @ 0x18009EEF8 (--_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x18009F524 (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 *     ?RemoveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z @ 0x1800A26C0 (-RemoveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z.c)
 */

void __fastcall LampArrayRawInputProvider::OnSipcEndpointStatus(__int64 a1, __int64 a2, int a3)
{
  _QWORD *i; // rbx
  __int64 ***v5; // r14
  __int64 **j; // rdi
  const char *v7; // r9
  __int64 **k; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); i = (_QWORD *)*i )
    {
      if ( i[2] == a2 )
      {
        v5 = (__int64 ***)(a1 + 48);
        for ( j = *(__int64 ***)(a1 + 48); j != (__int64 **)v5; j = (__int64 **)*j )
        {
          if ( LampArrayDevice::RemoveViewClient((LampArrayDevice *)j[2], (struct LampArrayEndpoint *)(i + 2))
            && !SetEvent(*(HANDLE *)(a1 + 240)) )
          {
            wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x1E7,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
              v7);
          }
        }
        if ( *((_DWORD *)i + 6) == *(_DWORD *)(a1 + 40) )
        {
          for ( k = *v5; k != (__int64 **)v5; k = (__int64 **)*k )
            LampArrayRawInputProvider::SetActiveViewClient(
              (LampArrayRawInputProvider *)a1,
              (struct LampArrayDevice *)k[2],
              0LL);
        }
        v9 = *i;
        if ( *(_QWORD **)(*i + 8LL) != i || (v10 = (_QWORD *)i[1], (_QWORD *)*v10 != i) )
          __fastfail(3u);
        *v10 = v9;
        *(_QWORD *)(v9 + 8) = v10;
        --*(_QWORD *)(a1 + 88);
        LampArrayRawInputProvider::LampArrayClientListEntry::`scalar deleting destructor'((LampArrayRawInputProvider::LampArrayClientListEntry *)i);
        return;
      }
    }
  }
}
