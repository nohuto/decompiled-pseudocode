/*
 * XREFs of _NtUserShutdownBlockReasonCreate@12 @ 0xD33A8
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 *     __GetAncestor@8 @ 0xB52FC (__GetAncestor@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _QueueShutdownData@8 @ 0x141FC0 (_QueueShutdownData@8.c)
 */

int __stdcall NtUserShutdownBlockReasonCreate(unsigned int a1, volatile void *Address, unsigned int a3)
{
  int v3; // esi
  _DWORD *v4; // ebx
  char *v5; // edi
  int v6; // eax
  unsigned int v8; // [esp+0h] [ebp-3Ch]
  const unsigned __int16 *v9; // [esp+4h] [ebp-38h]

  v3 = 0;
  EnterCrit(0, 1);
  v4 = (_DWORD *)ValidateHwnd(a1);
  if ( v4 )
  {
    if ( *(_DWORD *)(v4[2] + 232) == PsGetCurrentProcessWin32Process() )
    {
      if ( v4 == _GetAncestor(v4, 2) && a3 <= 0x101 )
      {
        v5 = (char *)Win32AllocPool(2 * a3 + 2, 1919054677);
        if ( v5 )
        {
          if ( a3 )
          {
            ProbeForRead(Address, 2 * a3 + 2, 1u);
            RtlStringCchCopyW(a3 + 1, v5, (unsigned __int16 *)Address, v8, v9);
          }
          else
          {
            *(_WORD *)v5 = 0;
          }
          v6 = InternalRemoveProp((int)v4, gatomShutdownBlockingReason, 1);
          if ( v6 )
            Win32FreePool(v6);
          if ( InternalSetProp((int)v4, (unsigned __int16)gatomShutdownBlockingReason, (int)v5, 1) )
          {
            if ( _gptiShutdownWaiter )
              QueueShutdownData(a1, (struct tagWND *)1);
            v3 = 1;
          }
          else
          {
            Win32FreePool(v5);
          }
        }
        else
        {
          UserSetLastError((struct _NT_TIB *)8);
        }
      }
      else
      {
        UserSetLastError((struct _NT_TIB *)0x57);
      }
    }
    else
    {
      v3 = 5;
    }
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
