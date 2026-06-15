/*
 * XREFs of ?QueryInterface@CAudioStream@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C0F0
 * Callers:
 *     ?QueryInterface@CAudioStream@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074E90 (-QueryInterface@CAudioStream@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioStream@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074EA0 (-QueryInterface@CAudioStream@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioStream@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074EB0 (-QueryInterface@CAudioStream@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioStream@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074EC0 (-QueryInterface@CAudioStream@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??8@YA_NAEBU_GUID@@0@Z @ 0x18004C210 (--8@YA_NAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::QueryInterface(CAudioStream *this, const struct _GUID *a2, void **a3)
{
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rdx
  char **v9; // r8
  char *v10; // rcx

  if ( (unsigned __int8)operator==(&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7, a2) )
  {
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 8LL))(this);
    result = 0LL;
    *a3 = this;
  }
  else if ( (unsigned __int8)operator==(&GUID_dafb0152_6a78_488a_b685_6dd5845a8db9, v5) )
  {
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 8LL))(this);
    *a3 = (char *)this + 8;
    return 0LL;
  }
  else if ( (unsigned __int8)operator==(&GUID_390561ae_7375_4558_aff9_667acfe35ac5, v7) )
  {
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 8LL))(this);
    *a3 = (char *)this + 24;
    return 0LL;
  }
  else
  {
    v10 = (char *)this + 32;
    if ( a3 )
    {
      if ( *v8 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
        && v8[1] == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
      {
        *v9 = v10;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 8LL))(v10);
        return 0LL;
      }
      else
      {
        *v9 = 0LL;
        return 2147500034LL;
      }
    }
    else
    {
      return 2147500035LL;
    }
  }
  return result;
}
