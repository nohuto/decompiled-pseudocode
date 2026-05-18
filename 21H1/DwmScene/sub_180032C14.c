/*
 * XREFs of sub_180032C14 @ 0x180032C14
 * Callers:
 *     sub_180032D50 @ 0x180032D50 (sub_180032D50.c)
 * Callees:
 *     sub_1800335F0 @ 0x1800335F0 (sub_1800335F0.c)
 *     sub_18006B2A8 @ 0x18006B2A8 (sub_18006B2A8.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180032C14(_QWORD *a1)
{
  volatile signed __int32 *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  signed __int32 v7; // eax
  __int64 v8; // rcx

  *a1 = &Spectre::Engine::D3D11::CommandListD3D11::`vftable';
  v2 = 0LL;
  v3 = a1[10];
  if ( v3 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v3 + 8);
      if ( !v7 )
        break;
      if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v7 + 1, v7) )
      {
        v2 = (volatile signed __int32 *)a1[10];
        if ( !a1[9] || !(unsigned __int8)sub_18006B2A8() )
          break;
        v8 = a1[18];
        if ( v8 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 880LL))(v8);
          sub_1800335F0(a1, 0LL);
        }
        goto LABEL_3;
      }
    }
  }
  sub_1801163DC(&unk_1802080A0, 3LL, "WARNING: CommandListD3D11 destroyed after RenderDeviceD3D11 has been shutdown.\n");
LABEL_3:
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v4 = a1[19];
  if ( v4 )
  {
    a1[19] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = a1[18];
  if ( v5 )
  {
    a1[18] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return sub_180067E8C(a1);
}
