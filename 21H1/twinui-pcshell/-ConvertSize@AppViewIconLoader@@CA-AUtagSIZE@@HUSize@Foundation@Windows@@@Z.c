/*
 * XREFs of ?ConvertSize@AppViewIconLoader@@CA?AUtagSIZE@@HUSize@Foundation@Windows@@@Z @ 0x18031AD3C
 * Callers:
 *     ?RuntimeClassInitialize@AppViewIconLoader@@QEAAJUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@Z @ 0x18031E8AC (-RuntimeClassInitialize@AppViewIconLoader@@QEAAJUIconProperties@Multitasking@ComposableShell@Int.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AppViewIconLoader::ConvertSize(int a1, __int64 a2)
{
  float v4; // [rsp+44h] [rbp+1Ch]
  __int64 v5; // [rsp+48h] [rbp+20h]

  v4 = *((float *)&a2 + 1);
  LODWORD(v5) = MulDiv((int)*(float *)&a2, a1, 96);
  HIDWORD(v5) = MulDiv((int)v4, a1, 96);
  return v5;
}
