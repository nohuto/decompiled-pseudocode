/*
 * XREFs of ?_ReadOptionalRegistryValue@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAU_MARGINS@@@Z @ 0x180397CE4
 * Callers:
 *     ?_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z @ 0x180397A70 (-_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z.c)
 *     ?_ReadNewVirtualDesktopButtonMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopNewButtonMetrics@@@Z @ 0x180397B80 (-_ReadNewVirtualDesktopButtonMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDe.c)
 *     ?_ReadThumbnailSizeMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUThumbnailSizeMetrics@@@Z @ 0x180397DB8 (-_ReadThumbnailSizeMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUThumbnailSizeMetric.c)
 *     ?_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetrics@@@Z @ 0x180397F54 (-_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetr.c)
 * Callees:
 *     ??$_ReadOptionalRegistryValueWithPrefix@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBG1PEAJ@Z @ 0x180396D54 (--$_ReadOptionalRegistryValueWithPrefix@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBG1PEA.c)
 */

void __fastcall MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue(
        MultitaskingViewConfigHelpers *this,
        __int64 a2,
        unsigned __int16 *a3,
        struct _MARGINS *a4)
{
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValueWithPrefix<long>(
    this,
    a2,
    (__int64)L"topmargin",
    (_DWORD *)a3 + 2);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValueWithPrefix<long>(
    this,
    a2,
    (__int64)L"bottommargin",
    (_DWORD *)a3 + 3);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValueWithPrefix<long>(this, a2, (__int64)L"leftmargin", a3);
  MultitaskingViewConfigHelpers::_ReadOptionalRegistryValueWithPrefix<long>(
    this,
    a2,
    (__int64)L"rightmargin",
    (_DWORD *)a3 + 1);
}
