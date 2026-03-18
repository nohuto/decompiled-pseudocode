/*
 * XREFs of ?pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z @ 0x1C02A6190
 * Callers:
 *     ?MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z @ 0x1C02A1A70 (-MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z.c)
 *     ?MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z @ 0x1C02A1C30 (-MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct _MDSURF *__fastcall pAllocateAndInitializeMDSURF(struct _VDEV *a1)
{
  unsigned int v1; // r8d
  _QWORD *v2; // rdx
  _QWORD *v3; // rax

  v1 = *((_DWORD *)a1 + 4);
  v2 = 0LL;
  if ( v1 <= 0x1FFFFFFF && 8 * (unsigned __int64)v1 + 24 >= 8 * (unsigned __int64)v1 )
  {
    v3 = EngAllocMem(1u, 8 * v1 + 24, 0x66735647u);
    v2 = v3;
    if ( v3 )
      v3[1] = v3 + 3;
  }
  return (struct _MDSURF *)v2;
}
