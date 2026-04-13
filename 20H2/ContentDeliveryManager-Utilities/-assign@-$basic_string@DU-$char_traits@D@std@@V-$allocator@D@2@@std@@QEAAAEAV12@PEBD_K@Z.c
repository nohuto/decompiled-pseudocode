/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x180017644
 * Callers:
 *     ?message@_Generic_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180007D10 (-message@_Generic_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?message@_Iostream_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180007D80 (-message@_Iostream_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180007E20 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ??0failure@ios_base@std@@QEAA@PEBDAEBVerror_code@2@@Z @ 0x18002A420 (--0failure@ios_base@std@@QEAA@PEBDAEBVerror_code@2@@Z.c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x180030594 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 *     ?do_grouping@?$numpunct@_W@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180035C10 (-do_grouping@-$numpunct@_W@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2.c)
 *     ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18004BA34 (-GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA-AV-$com_ptr_t@UIUserActivityPay.c)
 *     ?do_curr_symbol@?$_Mpunct@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800B5B70 (-do_curr_symbol@-$_Mpunct@D@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@.c)
 *     ?do_grouping@?$_Mpunct@_W@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800B69B0 (-do_grouping@-$_Mpunct@_W@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@.c)
 *     ?do_positive_sign@?$_Mpunct@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800B74E0 (-do_positive_sign@-$_Mpunct@D@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2.c)
 *     ?name@locale@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800C6A40 (-name@locale@std@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@XZ.c)
 *     ?do_negative_sign@?$_Mpunct@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800CBAF0 (-do_negative_sign@-$_Mpunct@D@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2.c)
 *     ?do_put@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@DAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x1800CBB40 (-do_put@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$ostreamb.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180017DE0 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180017EC4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180018120 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x1800CD8A8 (memcpy_0.c)
 */

void **__fastcall std::string::assign(void **a1, char *Src, size_t Size)
{
  void **v5; // rbx
  char *v6; // rax
  _BYTE *v8; // rax
  void *v9; // rcx
  _BYTE *v10; // rax

  v5 = a1;
  if ( Src )
  {
    v6 = (unsigned __int64)a1[3] < 0x10 ? (char *)a1 : (char *)*a1;
    if ( Src >= v6 )
    {
      if ( (unsigned __int64)a1[3] >= 0x10 )
        a1 = (void **)*a1;
      if ( (char *)a1 + (unsigned __int64)v5[2] > Src )
        return (void **)std::string::assign(v5);
    }
  }
  if ( Size == -1LL )
    std::wstring::_Xlen(v5);
  if ( (unsigned __int64)v5[3] >= Size )
  {
    if ( Size )
    {
LABEL_19:
      if ( (unsigned __int64)v5[3] < 0x10 )
        v9 = v5;
      else
        v9 = *v5;
      memcpy_0(v9, Src, Size);
      if ( (unsigned __int64)v5[3] < 0x10 )
        v10 = v5;
      else
        v10 = *v5;
      v5[2] = (void *)Size;
      v10[Size] = 0;
      return v5;
    }
    if ( (unsigned __int64)v5[3] < 0x10 )
      v8 = v5;
    else
      v8 = *v5;
    v5[2] = 0LL;
    *v8 = 0;
  }
  else
  {
    std::string::_Copy(v5);
  }
  if ( Size )
    goto LABEL_19;
  return v5;
}
