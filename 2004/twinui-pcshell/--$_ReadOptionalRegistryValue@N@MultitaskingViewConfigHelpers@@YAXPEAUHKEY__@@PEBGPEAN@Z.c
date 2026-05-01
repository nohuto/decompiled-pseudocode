/*
 * XREFs of ??$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z @ 0x1803975A8
 * Callers:
 *     ??$_ReadOptionalRegistryValueWithPrefix@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBG1PEAN@Z @ 0x180397688 (--$_ReadOptionalRegistryValueWithPrefix@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBG1PEA.c)
 *     ?_ReadFrameMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUFrameMetrics@@@Z @ 0x18039813C (-_ReadFrameMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUFrameMetrics@@@Z.c)
 *     ?_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z @ 0x180398330 (-_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z.c)
 *     ?_ReadThumbnailSizeMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUThumbnailSizeMetrics@@@Z @ 0x180398678 (-_ReadThumbnailSizeMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUThumbnailSizeMetric.c)
 *     ?_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetrics@@@Z @ 0x180398814 (-_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetr.c)
 * Callees:
 *     ?_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x180398624 (-_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z.c)
 */

int __fastcall MultitaskingViewConfigHelpers::_ReadOptionalRegistryValue<double>(
        MultitaskingViewConfigHelpers *a1,
        HKEY a2,
        double *a3,
        unsigned int *a4)
{
  int result; // eax
  int v6; // [rsp+48h] [rbp+20h] BYREF

  result = MultitaskingViewConfigHelpers::_ReadRegistryValue(a1, a2, (const unsigned __int16 *)&v6, a4);
  if ( result >= 0 )
  {
    result = v6;
    *a3 = (double)v6 / 100.0;
  }
  return result;
}
