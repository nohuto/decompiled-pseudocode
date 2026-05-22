/*
 * XREFs of ?ThrottleGestureNotification@MagnifierControllerProxy@@AEAA_NIAEBUPoint@Foundation@Windows@@@Z @ 0x180100DE8
 * Callers:
 *     ?PanGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@6@@Z @ 0x180100CE0 (-PanGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Win.c)
 *     ?ZoomGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@6@@Z @ 0x180101420 (-ZoomGestureDetected@MagnifierControllerProxy@@UEAAJW4MagnifierGestureState@Input@Internal@UI@Wi.c)
 * Callees:
 *     <none>
 */

bool __fastcall MagnifierControllerProxy::ThrottleGestureNotification(
        MagnifierControllerProxy *this,
        int a2,
        const struct Windows::Foundation::Point *a3)
{
  return a2 == 1
      && (!*((_BYTE *)this + 56)
       || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a3 - *((float *)this + 15)) & _xmm) <= 1.0
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 1) - *((float *)this + 16)) & _xmm) <= 1.0);
}
