/*
 * XREFs of ?ResizeView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1800D92E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopPositioner::ResizeView(
        __int64 a1,
        struct IApplicationView *a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  return CDesktopPositioner::ResizeView((CDesktopPositioner *)(a1 - 16), a2, a3, a4);
}
