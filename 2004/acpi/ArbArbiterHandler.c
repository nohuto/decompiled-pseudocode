/*
 * XREFs of ArbArbiterHandler @ 0x1C00A1230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ArbArbiterHandler(__int64 a1, int a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // edi
  struct _KEVENT *v9; // rcx
  struct _KEVENT *v10; // rcx

  KeEnterCriticalRegion();
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  if ( a2 > 5 )
  {
    if ( a2 == 6 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 200))(a1, a3);
      goto LABEL_10;
    }
    if ( a2 == 7 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 192))(a1, a3);
      goto LABEL_10;
    }
    if ( a2 != 8 )
    {
      if ( a2 == 9 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 184))(a1, a3);
        goto LABEL_10;
      }
      goto LABEL_22;
    }
LABEL_23:
    v7 = -1073741822;
    goto LABEL_14;
  }
  if ( a2 >= 4 )
    goto LABEL_23;
  if ( !a2 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 152))(a1, a3);
    goto LABEL_10;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(a1 + 168))(a1);
      goto LABEL_10;
    }
    if ( a2 == 3 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(a1 + 176))(a1);
      goto LABEL_10;
    }
LABEL_22:
    v7 = -1073741811;
    goto LABEL_14;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 160))(a1, a3);
LABEL_10:
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( (unsigned int)a2 <= 1 )
    {
      v10 = *(struct _KEVENT **)(a1 + 304);
      *(_BYTE *)(a1 + 296) = 1;
      KeClearEvent(v10);
    }
    else if ( (unsigned int)(a2 - 2) <= 1 )
    {
      v9 = *(struct _KEVENT **)(a1 + 304);
      *(_BYTE *)(a1 + 296) = 0;
      KeSetEvent(v9, 0, 0);
    }
  }
LABEL_14:
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KeLeaveCriticalRegion();
  return v7;
}
