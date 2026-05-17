/*
 * XREFs of _RtlInitializeNtUserPfn@24 @ 0x4B2F4850
 * Callers:
 *     <none>
 * Callees:
 *     _LdrProtectMrdata@4 @ 0x4B2E1D36 (_LdrProtectMrdata@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlInitializeNtUserPfn(void *Src, size_t Size, void *a3, size_t a4, void *a5, size_t a6)
{
  int v6; // esi
  int result; // eax
  __int64 v8; // [esp+8h] [ebp-Ch]
  int v9; // [esp+10h] [ebp-4h]

  HIDWORD(v8) = HIDWORD(qword_4B3A9300);
  v9 = qword_4B3A9300;
  v6 = 0;
  LODWORD(v8) = *(_DWORD *)__guard_check_icall_fptr;
  if ( !LdrParentRtlInitializeNtUserPfn
    || (result = LdrParentRtlInitializeNtUserPfn(LdrParentRtlInitializeNtUserPfn, Src, Size, a3, a4, a5, a6),
        v6 = result,
        result >= 0) )
  {
    if ( byte_4B3A91D8 || (Size & 7) != 0 || Size > 0xC0 || (a4 & 7) != 0 || a4 > 0xC0 || (a6 & 7) != 0 || a6 > 0x58 )
    {
      return -1073741811;
    }
    else
    {
      LdrProtectMrdata(0);
      memcpy(&NtUserPfn, Src, Size);
      memcpy(&off_4B3A90C0, a3, a4);
      memcpy(&off_4B3A9180, a5, a6);
      byte_4B3A91D8 = 1;
      LdrProtectMrdata(1);
      if ( v9 != (_DWORD)qword_4B3A9300
        || v8 != __PAIR64__(HIDWORD(qword_4B3A9300), *(_DWORD *)__guard_check_icall_fptr) )
      {
        __fastfail(0x13u);
      }
      return v6;
    }
  }
  return result;
}
